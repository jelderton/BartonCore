# ------------------------------ tabstop = 4 ----------------------------------
#
# If not stated otherwise in this file or this component's LICENSE file the
# following copyright and licenses apply:
#
# Copyright 2024 Comcast Cable Communications Management, LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# SPDX-License-Identifier: Apache-2.0
#
# ------------------------------ tabstop = 4 ----------------------------------

#--------------------------------------------------------------------------------------
#
# CMake definition for the fcore 'xml library'
# Should not be utilized directly, but imported from our parent
# file via the 'add_subdirectory()' routine.
#
#--------------------------------------------------------------------------------------


# setup include paths
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/public
        ${CROSS_OUTPUT}/include     # 3rd Party
)

# define source files (using wildcard)
file(GLOB SOURCES "src/*.c")

add_library(xhJsonHelper STATIC ${SOURCES})
target_link_libraries(xhJsonHelper cjson xhTypes xhUtil)

# export our 'public' folder so others can include our headers
target_include_directories(xhJsonHelper PUBLIC public)

# test target
bcore_add_cmocka_test(
        NAME testJsonPointer
        TYPE unit
        TEST_SOURCES "test/src/jsonPointerTest.c"
        LINK_LIBRARIES xhJsonHelper
)
