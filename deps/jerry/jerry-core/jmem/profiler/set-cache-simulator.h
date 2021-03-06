
/* Copyright 2016-2020 Gyeonghwan Hong, Sungkyunkwan University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SET_CACHE_SIMULATOR_H
#define SET_CACHE_SIMULATOR_H

#include "jrt.h"

// Fully-associative cache simulator
extern uint32_t simulate_cache(uint32_t sidx, int type);

#endif /* defined(SET_CACHE_SIMULATOR_H) */