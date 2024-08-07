/*
 * SimpleConfigConsumer.h
 *
 * This source file is part of the FoundationDB open source project
 *
 * Copyright 2013-2024 Apple Inc. and the FoundationDB project authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "fdbserver/IConfigConsumer.h"
#include "fdbserver/LocalConfiguration.h"
#include <memory>

/*
 * A test-only configuration database consumer implementation that interacts with a single-node
 * configuration database. It assumed that a single coordinator (the lowest coordinator by IP address)
 * stores all data, so there is no fault tolerance.
 */
class SimpleConfigConsumer : public IConfigConsumer {
	PImpl<class SimpleConfigConsumerImpl> impl;

public:
	SimpleConfigConsumer(ServerCoordinators const& coordinators,
	                     double pollingInterval,
	                     Optional<double> compactionInterval);
	~SimpleConfigConsumer();
	Future<Void> readSnapshot(ConfigBroadcaster& broadcaster) override;
	Future<Void> consume(ConfigBroadcaster& broadcaster) override;
	void allowSpecialCaseRollforward() override { ASSERT(false); }
	UID getID() const override;

public: // Testing
	SimpleConfigConsumer(ConfigFollowerInterface const& cfi,
	                     double pollingInterval,
	                     Optional<double> compactionInterval);
};
