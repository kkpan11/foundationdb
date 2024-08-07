
/*
 * ActorFuzz.actor.cpp
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

// THIS FILE WAS GENERATED BY actorFuzz.py; DO NOT MODIFY IT DIRECTLY

#include "fdbrpc/ActorFuzz.h"
#include "flow/actorcompiler.h" // has to be last include

#ifndef WIN32

ACTOR Future<int> actorFuzz0(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	try {
		outputStream.send(390229);
		state std::vector<int> list637154;
		list637154.push_back(1);
		list637154.push_back(2);
		list637154.push_back(3);
		for (auto i : list637154) {
			(void)i;
			outputStream.send(596271);
			return 574865;
		}
		outputStream.send(616994);
	} catch (...) {
		outputStream.send(282473);
		state int i538813;
		for (i538813 = 0; i538813 < 5; i538813++) {
			outputStream.send(202451);
			state std::vector<int> list106964;
			list106964.push_back(1);
			list106964.push_back(2);
			list106964.push_back(3);
			for (auto i : list106964) {
				(void)i;
				outputStream.send(306539);
				if ((++ifstate & 1) == 1) {
					outputStream.send(980726);
					try {
						outputStream.send(103523);
						if ((++ifstate & 1) == 1) {
							outputStream.send(750915);
							int input = waitNext(inputStream);
							outputStream.send(input + 714763);
							outputStream.send(838596);
						} else {
							outputStream.send(883911);
							try {
								outputStream.send(625121);
								int input = waitNext(inputStream);
								outputStream.send(input + 826693);
								outputStream.send(593359);
							} catch (...) {
								outputStream.send(376812);
								return 247718;
							}
							outputStream.send(855094);
						}
						outputStream.send(547309);
					} catch (...) {
						outputStream.send(822404);
						break;
					}
					outputStream.send(496422);
				} else {
					outputStream.send(972353);
					break;
				}
				outputStream.send(732279);
			}
			outputStream.send(710432);
		}
		outputStream.send(492398);
	}
	return 240968;
}

ACTOR Future<int> actorFuzz1(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state int i661806;
	for (i661806 = 0; i661806 < 5; i661806++) {
		outputStream.send(477566);
		try {
			outputStream.send(815578);
			continue;
		} catch (...) {
			outputStream.send(787898);
			state std::vector<int> list781874;
			list781874.push_back(1);
			list781874.push_back(2);
			list781874.push_back(3);
			for (auto i : list781874) {
				(void)i;
				outputStream.send(625656);
				try {
					outputStream.send(114830);
					state int i996799;
					for (i996799 = 0; i996799 < 5; i996799++) {
						outputStream.send(188397);
						try {
							outputStream.send(649779);
							wait(error); // throw operation_failed()
							outputStream.send(705317);
							break;
						} catch (...) {
							outputStream.send(761942);
							return 469895;
						}
					}
					outputStream.send(613669);
				} catch (...) {
					outputStream.send(703172);
					return 811053;
				}
				outputStream.send(329141);
			}
			outputStream.send(647010);
		}
		outputStream.send(287946);
		break;
	}
	return 917160;
}

ACTOR Future<int> actorFuzz2(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	int input = waitNext(inputStream);
	outputStream.send(input + 475677);
	return 930237;
}

ACTOR Future<int> actorFuzz3(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	throw_operation_failed();
	return 499525;
}

ACTOR Future<int> actorFuzz4(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	try {
		outputStream.send(180600);
		state std::vector<int> list613889;
		list613889.push_back(1);
		list613889.push_back(2);
		list613889.push_back(3);
		for (auto i : list613889) {
			(void)i;
			outputStream.send(177605);
			continue;
		}
		outputStream.send(954508);
	} catch (...) {
		outputStream.send(461484);
		return 117481;
	}
	return 810052;
}

ACTOR Future<int> actorFuzz5(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	wait(error); // throw operation_failed()
	outputStream.send(382339);
	if ((++ifstate & 1) == 1) {
		outputStream.send(655938);
		state int i139204;
		for (i139204 = 0; i139204 < 5; i139204++) {
			outputStream.send(481427);
			wait(error); // throw operation_failed()
			outputStream.send(577939);
		}
		outputStream.send(252859);
	}
	return 273288;
}

ACTOR Future<int> actorFuzz6(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state int i956829;
	for (i956829 = 0; i956829 < 5; i956829++) {
		outputStream.send(320321);
		state int i350925;
		for (i350925 = 0; i350925 < 5; i350925++) {
			outputStream.send(266526);
			try {
				outputStream.send(762336);
				break;
			} catch (...) {
				outputStream.send(391672);
				continue;
			}
		}
		outputStream.send(463730);
	}
	return 945289;
}

ACTOR Future<int> actorFuzz7(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	try {
		outputStream.send(406152);
		try {
			outputStream.send(478841);
			try {
				outputStream.send(609181);
				state int i510243;
				for (i510243 = 0; i510243 < 5; i510243++) {
					outputStream.send(634881);
					state std::vector<int> list596949;
					list596949.push_back(1);
					list596949.push_back(2);
					list596949.push_back(3);
					for (auto i : list596949) {
						(void)i;
						outputStream.send(253861);
						int input = waitNext(inputStream);
						outputStream.send(input + 591023);
						outputStream.send(240597);
					}
					outputStream.send(415949);
					int input = waitNext(inputStream);
					outputStream.send(input + 165335);
					outputStream.send(478331);
				}
				outputStream.send(331905);
			} catch (...) {
				outputStream.send(686252);
				return 997694;
			}
			outputStream.send(946924);
			state std::vector<int> list833282;
			list833282.push_back(1);
			list833282.push_back(2);
			list833282.push_back(3);
			for (auto i : list833282) {
				(void)i;
				outputStream.send(663973);
				if ((++ifstate & 1) == 1) {
					outputStream.send(797073);
					wait(error); // throw operation_failed()
					outputStream.send(953652);
				}
				outputStream.send(807309);
			}
			outputStream.send(996672);
		} catch (...) {
			outputStream.send(971923);
			state int i793430;
			for (i793430 = 0; i793430 < 5; i793430++) {
				outputStream.send(295772);
				try {
					outputStream.send(923567);
					state std::vector<int> list814034;
					list814034.push_back(1);
					list814034.push_back(2);
					list814034.push_back(3);
					for (auto i : list814034) {
						(void)i;
						outputStream.send(559259);
						continue;
					}
					outputStream.send(325678);
				} catch (...) {
					outputStream.send(691889);
					continue;
				}
				outputStream.send(679187);
			}
			outputStream.send(534407);
		}
		outputStream.send(814172);
	} catch (...) {
		outputStream.send(117532);
		state std::vector<int> list243466;
		list243466.push_back(1);
		list243466.push_back(2);
		list243466.push_back(3);
		for (auto i : list243466) {
			(void)i;
			outputStream.send(593203);
			try {
				outputStream.send(289002);
				return 321054;
			} catch (...) {
				outputStream.send(540106);
				return 919162;
			}
		}
		outputStream.send(679173);
	}
	return 949658;
}

ACTOR Future<int> actorFuzz8(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	int input = waitNext(inputStream);
	outputStream.send(input + 284937);
	return 696473;
}

ACTOR Future<int> actorFuzz9(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	int input = waitNext(inputStream);
	outputStream.send(input + 140463);
	return 397424;
}

ACTOR Future<int> actorFuzz10(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state int i832228;
	for (i832228 = 0; i832228 < 5; i832228++) {
		outputStream.send(543113);
		wait(error); // throw operation_failed()
		outputStream.send(780932);
	}
	return 402988;
}

ACTOR Future<int> actorFuzz11(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	wait(error); // throw operation_failed()
	return 672734;
}

ACTOR Future<int> actorFuzz12(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state std::vector<int> list466120;
	list466120.push_back(1);
	list466120.push_back(2);
	list466120.push_back(3);
	for (auto i : list466120) {
		(void)i;
		outputStream.send(970588);
		return 981887;
	}
	return 869298;
}

ACTOR Future<int> actorFuzz13(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	if ((++ifstate & 1) == 0) {
		outputStream.send(571414);
		return 591307;
	}
	return 861219;
}

ACTOR Future<int> actorFuzz14(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state std::vector<int> list370902;
	list370902.push_back(1);
	list370902.push_back(2);
	list370902.push_back(3);
	for (auto i : list370902) {
		(void)i;
		outputStream.send(527098);
		continue;
	}
	return 628047;
}

ACTOR Future<int> actorFuzz15(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state int i450301;
	for (i450301 = 0; i450301 < 5; i450301++) {
		outputStream.send(582389);
		state std::vector<int> list863601;
		list863601.push_back(1);
		list863601.push_back(2);
		list863601.push_back(3);
		for (auto i : list863601) {
			(void)i;
			outputStream.send(240216);
			break;
		}
		outputStream.send(732317);
	}
	return 884781;
}

ACTOR Future<int> actorFuzz16(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	if ((++ifstate & 1) == 1) {
		outputStream.send(943071);
		state std::vector<int> list811122;
		list811122.push_back(1);
		list811122.push_back(2);
		list811122.push_back(3);
		for (auto i : list811122) {
			(void)i;
			outputStream.send(492690);
			if ((++ifstate & 1) == 1) {
				outputStream.send(388192);
				wait(error); // throw operation_failed()
				outputStream.send(545437);
			} else {
				outputStream.send(908751);
				state int i120459;
				for (i120459 = 0; i120459 < 5; i120459++) {
					outputStream.send(198776);
					return 537939;
				}
				outputStream.send(649270);
			}
			outputStream.send(397872);
		}
		outputStream.send(493007);
	} else {
		outputStream.send(437137);
		state std::vector<int> list226908;
		list226908.push_back(1);
		list226908.push_back(2);
		list226908.push_back(3);
		for (auto i : list226908) {
			(void)i;
			outputStream.send(321651);
			if ((++ifstate & 1) == 1) {
				outputStream.send(396995);
				state int i753710;
				for (i753710 = 0; i753710 < 5; i753710++) {
					outputStream.send(235407);
					break;
				}
				outputStream.send(792039);
			}
			outputStream.send(659099);
		}
		outputStream.send(403928);
	}
	return 197156;
}

ACTOR Future<int> actorFuzz17(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state std::vector<int> list522792;
	list522792.push_back(1);
	list522792.push_back(2);
	list522792.push_back(3);
	for (auto i : list522792) {
		(void)i;
		outputStream.send(249436);
		try {
			outputStream.send(416782);
			continue;
		} catch (...) {
			outputStream.send(237787);
			loop {
				outputStream.send(438476);
				break;
			}
			outputStream.send(939594);
		}
		outputStream.send(670490);
		if ((++ifstate & 1) == 0) {
			outputStream.send(264281);
			try {
				outputStream.send(830283);
				continue;
			} catch (...) {
				outputStream.send(157517);
				continue;
			}
		}
		outputStream.send(990392);
	}
	return 299183;
}

ACTOR Future<int> actorFuzz18(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	try {
		outputStream.send(337649);
		state int i910140;
		for (i910140 = 0; i910140 < 5; i910140++) {
			outputStream.send(395297);
			break;
		}
		outputStream.send(807261);
	} catch (...) {
		outputStream.send(628394);
		try {
			outputStream.send(658059);
			throw operation_failed();
		} catch (...) {
			outputStream.send(787535);
			if ((++ifstate & 1) == 1) {
				outputStream.send(945855);
				int input = waitNext(inputStream);
				outputStream.send(input + 401313);
				outputStream.send(483948);
			} else {
				outputStream.send(705433);
				try {
					outputStream.send(110258);
					state std::vector<int> list917536;
					list917536.push_back(1);
					list917536.push_back(2);
					list917536.push_back(3);
					for (auto i : list917536) {
						(void)i;
						outputStream.send(539878);
						throw operation_failed();
					}
					outputStream.send(265595);
				} catch (...) {
					outputStream.send(919259);
					try {
						outputStream.send(770240);
						throw operation_failed();
					} catch (...) {
						outputStream.send(383788);
						throw operation_failed();
					}
				}
				outputStream.send(954545);
			}
			outputStream.send(365388);
		}
		outputStream.send(764202);
	}
	return 517901;
}

ACTOR Future<int> actorFuzz19(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state std::vector<int> list476707;
	list476707.push_back(1);
	list476707.push_back(2);
	list476707.push_back(3);
	for (auto i : list476707) {
		(void)i;
		outputStream.send(492598);
		int input = waitNext(inputStream);
		outputStream.send(input + 138186);
		outputStream.send(742053);
	}
	return 592919;
}

ACTOR Future<int> actorFuzz20(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	if ((++ifstate & 1) == 0) {
		outputStream.send(751400);
		int input = waitNext(inputStream);
		outputStream.send(input + 106231);
		outputStream.send(139622);
	} else {
		outputStream.send(760082);
		throw operation_failed();
	}
	return 705285;
}

ACTOR Future<int> actorFuzz21(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	return 806394;
}

ACTOR Future<int> actorFuzz22(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	try {
		outputStream.send(722878);
		try {
			outputStream.send(369302);
			return 416748;
		} catch (...) {
			outputStream.send(568306);
			state std::vector<int> list504461;
			list504461.push_back(1);
			list504461.push_back(2);
			list504461.push_back(3);
			for (auto i : list504461) {
				(void)i;
				outputStream.send(827088);
				if ((++ifstate & 1) == 0) {
					outputStream.send(909504);
					return 528584;
				}
				outputStream.send(275831);
			}
			outputStream.send(739194);
		}
		outputStream.send(456449);
	} catch (...) {
		outputStream.send(208944);
		try {
			outputStream.send(205829);
			int input = waitNext(inputStream);
			outputStream.send(input + 539161);
			outputStream.send(820020);
		} catch (...) {
			outputStream.send(666594);
			if ((++ifstate & 1) == 1) {
				outputStream.send(153749);
				return 657441;
			}
			outputStream.send(312545);
		}
		outputStream.send(803123);
	}
	outputStream.send(646039);
	state std::vector<int> list700360;
	list700360.push_back(1);
	list700360.push_back(2);
	list700360.push_back(3);
	for (auto i : list700360) {
		(void)i;
		outputStream.send(434654);
		try {
			outputStream.send(292762);
			break;
		} catch (...) {
			outputStream.send(540935);
			try {
				outputStream.send(202527);
				state int i246439;
				for (i246439 = 0; i246439 < 5; i246439++) {
					outputStream.send(141484);
					continue;
				}
				outputStream.send(265555);
			} catch (...) {
				outputStream.send(506444);
				int input = waitNext(inputStream);
				outputStream.send(input + 279285);
				outputStream.send(926817);
			}
			outputStream.send(957345);
		}
		outputStream.send(893732);
	}
	return 888702;
}

ACTOR Future<int> actorFuzz23(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state std::vector<int> list316142;
	list316142.push_back(1);
	list316142.push_back(2);
	list316142.push_back(3);
	for (auto i : list316142) {
		(void)i;
		outputStream.send(562792);
		return 231437;
	}
	return 226698;
}

ACTOR Future<int> actorFuzz24(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	int input = waitNext(inputStream);
	outputStream.send(input + 846672);
	return 835175;
}

ACTOR Future<int> actorFuzz25(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	try {
		outputStream.send(843261);
		if ((++ifstate & 1) == 0) {
			outputStream.send(166067);
			if ((++ifstate & 1) == 1) {
				outputStream.send(135307);
				throw operation_failed();
			} else {
				outputStream.send(150379);
				int input = waitNext(inputStream);
				outputStream.send(input + 234945);
				outputStream.send(806946);
			}
			outputStream.send(908760);
		}
		outputStream.send(327560);
	} catch (...) {
		outputStream.send(573810);
		if ((++ifstate & 1) == 0) {
			outputStream.send(313835);
			throw_operation_failed();
			outputStream.send(749685);
		}
		outputStream.send(706935);
	}
	return 592398;
}

ACTOR Future<int> actorFuzz26(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	if ((++ifstate & 1) == 1) {
		outputStream.send(520263);
		try {
			outputStream.send(306397);
			int input = waitNext(inputStream);
			outputStream.send(input + 943232);
			outputStream.send(366272);
			if ((++ifstate & 1) == 0) {
				outputStream.send(700651);
				state std::vector<int> list649823;
				list649823.push_back(1);
				list649823.push_back(2);
				list649823.push_back(3);
				for (auto i : list649823) {
					(void)i;
					outputStream.send(146918);
					return 191890;
				}
				outputStream.send(987155);
			}
			outputStream.send(499733);
		} catch (...) {
			outputStream.send(936386);
			try {
				outputStream.send(259652);
				int input = waitNext(inputStream);
				outputStream.send(input + 247889);
				outputStream.send(402174);
				state int i876439;
				for (i876439 = 0; i876439 < 5; i876439++) {
					outputStream.send(909715);
					state std::vector<int> list905706;
					list905706.push_back(1);
					list905706.push_back(2);
					list905706.push_back(3);
					for (auto i : list905706) {
						(void)i;
						outputStream.send(558855);
						return 784546;
					}
					outputStream.send(260752);
				}
				outputStream.send(438765);
			} catch (...) {
				outputStream.send(873214);
				int input = waitNext(inputStream);
				outputStream.send(input + 980301);
				outputStream.send(265293);
			}
			outputStream.send(133652);
		}
		outputStream.send(414082);
	} else {
		outputStream.send(398083);
		if ((++ifstate & 1) == 1) {
			outputStream.send(396069);
			state std::vector<int> list327297;
			list327297.push_back(1);
			list327297.push_back(2);
			list327297.push_back(3);
			for (auto i : list327297) {
				(void)i;
				outputStream.send(571919);
				if ((++ifstate & 1) == 0) {
					outputStream.send(620625);
					return 270285;
				}
				outputStream.send(892626);
			}
			outputStream.send(564398);
		}
		outputStream.send(614487);
	}
	return 568400;
}

ACTOR Future<int> actorFuzz27(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	int input = waitNext(inputStream);
	outputStream.send(input + 312322);
	return 196907;
}

ACTOR Future<int> actorFuzz28(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state int i223839;
	for (i223839 = 0; i223839 < 5; i223839++) {
		outputStream.send(715827);
		state std::vector<int> list555985;
		list555985.push_back(1);
		list555985.push_back(2);
		list555985.push_back(3);
		for (auto i : list555985) {
			(void)i;
			outputStream.send(529509);
			break;
		}
		outputStream.send(449273);
	}
	return 743922;
}

ACTOR Future<int> actorFuzz29(FutureStream<int> inputStream, PromiseStream<int> outputStream, Future<Void> error) {
	state int ifstate = 0;
	state int i797447;
	for (i797447 = 0; i797447 < 5; i797447++) {
		outputStream.send(821092);
		int input = waitNext(inputStream);
		outputStream.send(input + 900028);
		outputStream.send(617942);
	}
	return 560881;
}

std::pair<int, int> actorFuzzTests() {
	int testsOK = 0;
	testsOK += testFuzzActor(&actorFuzz0, "actorFuzz0", { 390229, 596271, 574865 });
	testsOK +=
	    testFuzzActor(&actorFuzz1,
	                  "actorFuzz1",
	                  { 477566, 815578, 477566, 815578, 477566, 815578, 477566, 815578, 477566, 815578, 917160 });
	testsOK += testFuzzActor(&actorFuzz2, "actorFuzz2", { 476677, 930237 });
	testsOK += testFuzzActor(&actorFuzz3, "actorFuzz3", { 1000 });
	testsOK += testFuzzActor(&actorFuzz4, "actorFuzz4", { 180600, 177605, 177605, 177605, 954508, 810052 });
	testsOK += testFuzzActor(&actorFuzz5, "actorFuzz5", { 1000 });
	testsOK += testFuzzActor(&actorFuzz6, "actorFuzz6", { 320321, 266526, 762336, 463730, 320321, 266526, 762336,
	                                                      463730, 320321, 266526, 762336, 463730, 320321, 266526,
	                                                      762336, 463730, 320321, 266526, 762336, 463730, 945289 });
	testsOK += testFuzzActor(
	    &actorFuzz7,
	    "actorFuzz7",
	    { 406152, 478841, 609181, 634881, 253861, 592023, 240597, 253861, 593023, 240597, 253861, 594023, 240597,
	      415949, 169335, 478331, 634881, 253861, 596023, 240597, 253861, 597023, 240597, 253861, 598023, 240597,
	      415949, 173335, 478331, 634881, 253861, 600023, 240597, 253861, 601023, 240597, 253861, 602023, 240597,
	      415949, 177335, 478331, 634881, 253861, 604023, 240597, 253861, 605023, 240597, 253861, 606023, 240597,
	      415949, 181335, 478331, 634881, 253861, 608023, 240597, 253861, 609023, 240597, 253861, 610023, 240597,
	      415949, 185335, 478331, 331905, 946924, 663973, 797073, 971923, 295772, 923567, 559259, 559259, 559259,
	      325678, 679187, 295772, 923567, 559259, 559259, 559259, 325678, 679187, 295772, 923567, 559259, 559259,
	      559259, 325678, 679187, 295772, 923567, 559259, 559259, 559259, 325678, 679187, 295772, 923567, 559259,
	      559259, 559259, 325678, 679187, 534407, 814172, 949658 });
	testsOK += testFuzzActor(&actorFuzz8, "actorFuzz8", { 285937, 696473 });
	testsOK += testFuzzActor(&actorFuzz9, "actorFuzz9", { 141463, 397424 });
	testsOK += testFuzzActor(&actorFuzz10, "actorFuzz10", { 543113, 1000 });
	testsOK += testFuzzActor(&actorFuzz11, "actorFuzz11", { 1000 });
	testsOK += testFuzzActor(&actorFuzz12, "actorFuzz12", { 970588, 981887 });
	testsOK += testFuzzActor(&actorFuzz13, "actorFuzz13", { 861219 });
	testsOK += testFuzzActor(&actorFuzz14, "actorFuzz14", { 527098, 527098, 527098, 628047 });
	testsOK += testFuzzActor(&actorFuzz15,
	                         "actorFuzz15",
	                         { 582389,
	                           240216,
	                           732317,
	                           582389,
	                           240216,
	                           732317,
	                           582389,
	                           240216,
	                           732317,
	                           582389,
	                           240216,
	                           732317,
	                           582389,
	                           240216,
	                           732317,
	                           884781 });
	testsOK += testFuzzActor(&actorFuzz16, "actorFuzz16", { 943071, 492690, 908751, 198776, 537939 });
	testsOK += testFuzzActor(&actorFuzz17, "actorFuzz17", { 249436, 416782, 249436, 416782, 249436, 416782, 299183 });
	testsOK += testFuzzActor(&actorFuzz18, "actorFuzz18", { 337649, 395297, 807261, 517901 });
	testsOK += testFuzzActor(&actorFuzz19,
	                         "actorFuzz19",
	                         { 492598, 139186, 742053, 492598, 140186, 742053, 492598, 141186, 742053, 592919 });
	testsOK += testFuzzActor(&actorFuzz20, "actorFuzz20", { 760082, 1000 });
	testsOK += testFuzzActor(&actorFuzz21, "actorFuzz21", { 806394 });
	testsOK += testFuzzActor(&actorFuzz22, "actorFuzz22", { 722878, 369302, 416748 });
	testsOK += testFuzzActor(&actorFuzz23, "actorFuzz23", { 562792, 231437 });
	testsOK += testFuzzActor(&actorFuzz24, "actorFuzz24", { 847672, 835175 });
	testsOK += testFuzzActor(&actorFuzz25, "actorFuzz25", { 843261, 327560, 592398 });
	testsOK += testFuzzActor(&actorFuzz26, "actorFuzz26", { 520263, 306397, 944232, 366272, 700651, 146918, 191890 });
	testsOK += testFuzzActor(&actorFuzz27, "actorFuzz27", { 313322, 196907 });
	testsOK += testFuzzActor(&actorFuzz28,
	                         "actorFuzz28",
	                         { 715827,
	                           529509,
	                           449273,
	                           715827,
	                           529509,
	                           449273,
	                           715827,
	                           529509,
	                           449273,
	                           715827,
	                           529509,
	                           449273,
	                           715827,
	                           529509,
	                           449273,
	                           743922 });
	testsOK += testFuzzActor(&actorFuzz29,
	                         "actorFuzz29",
	                         { 821092,
	                           901028,
	                           617942,
	                           821092,
	                           902028,
	                           617942,
	                           821092,
	                           903028,
	                           617942,
	                           821092,
	                           904028,
	                           617942,
	                           821092,
	                           905028,
	                           617942,
	                           560881 });
	return std::make_pair(testsOK, 30);
}
#endif // WIN32
