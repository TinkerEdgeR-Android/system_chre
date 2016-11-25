/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "chre.h"

#include <cinttypes>

namespace chre {
namespace app {

bool helloWorldStart() {
  chreLog(CHRE_LOG_INFO, "Hello, World! - App started on platform ID %" PRIx64,
      chreGetPlatformId());
  return true;
}

void helloWorldHandleEvent(uint32_t senderInstanceId,
                           uint16_t eventType,
                           const void *eventData) {
  uint64_t currentTime = chreGetTime();
  chreLog(CHRE_LOG_INFO, "Hello, World! - Received event 0x%" PRIx16
          " at time %" PRIu64, eventType, currentTime);
}

void helloWorldStop() {
  chreLog(CHRE_LOG_INFO, "Hello, World! - Stopped");
}

}  // namespace app
}  // namespace chre