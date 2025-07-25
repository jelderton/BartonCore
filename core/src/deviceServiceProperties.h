//------------------------------ tabstop = 4 ----------------------------------
//
// If not stated otherwise in this file or this component's LICENSE file the
// following copyright and licenses apply:
//
// Copyright 2024 Comcast Cable Communications Management, LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0
//
//------------------------------ tabstop = 4 ----------------------------------

/*
 * Created by Christian Leithner on 9/26/2024.
 */

#pragma once

#include "barton-core-properties.h"

// TODO Refactor calls to gobject layer for properties to calls here instead.
//  @see BARTON-136

// Internal mapping to GObject property keys
#define LOCAL_EUI64_PROP_KEY                 B_CORE_BARTON_FIFTEEN_FOUR_EUI64
#define DEFAULT_THREAD_NETWORK_NAME_PROP_KEY B_CORE_BARTON_DEFAULT_THREAD_NETWORK_NAME
