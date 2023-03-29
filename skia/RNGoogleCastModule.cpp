/*
 * Copyright (C) 1994-2022 OpenTV, Inc. and Nagravision S.A.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ReactSkia/utils/RnsLog.h"
#include <cxxreact/JsArgumentHelpers.h>

#include "RNGoogleCastModule.h"

using namespace folly;
namespace facebook {
namespace xplat {

RNGoogleCastModule::RNGoogleCastModule() { }

auto RNGoogleCastModule::getConstants() -> std::map<std::string, folly::dynamic> {
  return {};
}

std::string RNGoogleCastModule::getName() {
  return "RNGoogleCast";
}

auto RNGoogleCastModule::getMethods() -> std::vector<Method> {
  return {
    Method(
    "play",
    [] (dynamic args){
      RNS_LOG_NOT_IMPL;
      return;
      }), 
 };
}

#ifdef __cplusplus
extern "C" {
#endif
RNS_EXPORT_MODULE(RNGoogleCast)
#ifdef __cplusplus
}
#endif

} // xplat
} // facebook
