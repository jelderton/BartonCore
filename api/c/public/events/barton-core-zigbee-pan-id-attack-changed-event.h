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
 * Created by ss411 on 08/08/2024.
 */

#pragma once

#include "events/barton-core-event.h"
#include <glib-object.h>
#include <stdbool.h>

G_BEGIN_DECLS

#define B_CORE_ZIGBEE_PAN_ID_ATTACK_CHANGED_EVENT_TYPE                                                       \
    (b_core_zigbee_pan_id_attack_changed_event_get_type())

G_DECLARE_FINAL_TYPE(BCoreZigbeePanIdAttackChangedEvent,
                     b_core_zigbee_pan_id_attack_changed_event,
                     B_CORE,
                     ZIGBEE_PAN_ID_ATTACK_CHANGED_EVENT,
                     BCoreEvent);

typedef enum
{
    B_CORE_ZIGBEE_PAN_ID_ATTACK_CHANGED_EVENT_PROP_ATTACK_DETECTED = 1,

    N_B_CORE_ZIGBEE_PAN_ID_ATTACK_CHANGED_EVENT_PROPERTIES
} BCoreZigbeePanIdAttackChangedEventProperty;

static const char *B_CORE_ZIGBEE_PAN_ID_ATTACK_CHANGED_EVENT_PROPERTY_NAMES[] = {NULL, "attack-detected"};

/**
 * b_core_zigbee_pan_id_attack_changed_event_new
 *
 * @brief
 *
 * @return BCoreZigbeePanIdAttackChangedEvent*
 */
BCoreZigbeePanIdAttackChangedEvent *b_core_zigbee_pan_id_attack_changed_event_new(void);

G_END_DECLS
