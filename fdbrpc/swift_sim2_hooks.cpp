/*
 * swift_sim2_hooks.cpp
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

#include "fdbrpc/simulator.h"
#include "flow/flow.h"
#include "flow/network.h"
#include "flow/TLSConfig.actor.h"
#include "flow/swift_concurrency_hooks.h"
#include "flow/swift.h"
#include "flow/swift/ABI/Task.h"

//// ==== --------------------------------------------------------------------------------------------------------------
//// ==== Sim2 hooks

SWIFT_CC(swift)
void sim2_enqueueGlobal_hook_impl(swift::Job* _Nonnull job, void (*_Nonnull)(swift::Job*) __attribute__((swiftcall))) {
	ISimulator* sim = g_simulator;
	ASSERT(sim);

	sim->_swiftEnqueue(job);
}
