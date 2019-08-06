#pragma once

#define CHATA_PLATFORM_WINDOWS       0
#define CHATA_PLATFORM_ANDROID       0
#define CHATA_PLATFORM_LINUX         0
#define CHATA_PLATFORM_IOS           0
#define CHATA_PLATFORM_OSX           0
#define CHATA_PLATFORM_EMSCRIPTEN    0

#if defined(_WIN32) || defined(_WIN64)
#   undef  CHATA_PLATFORM_WINDOWS
#   define CHATA_PLATFORM_WINDOWS    1
#elif defined(__ANDROID__)
#   undef  CHATA_PLATFORM_ANDROID
#   define CHATA_PLATFORM_ANDROID    1
#elif defined(__linux__)
#   undef  CHATA_PLATFORM_LINUX
#   define CHATA_PLATFORM_LINUX      1
#elif defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) || defined(__ENVIRONMENT_TV_OS_VERSION_MIN_REQUIRED__)
#   undef  CHATA_PLATFORM_IOS
#   define CHATA_PLATFORM_IOS        1
#elif defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__)
#   undef  CHATA_PLATFORM_OSX
#   define CHATA_PLATFORM_OSX        1
#elif defined(__EMSCRIPTEN__)
#   undef  CHATA_PLATFORM_EMSCRIPTEN
#   define CHATA_PLATFORM_EMSCRIPTEN 1
#else
#   error  "Unknown PLATFORM"
#endif

#define CHATA_PLATFORM_OS_DESKTOP    (CHATA_PLATFORM_WINDOWS || CHATA_PLATFORM_LINUX || CHATA_PLATFORM_OSX)
#define CHATA_PLATFORM_OS_MOBILE     (CHATA_PLATFORM_ANDROID || CHATA_PLATFORM_IOS)
#define CHATA_PLATFORM_OS_WEB        (CHATA_PLATFORM_EMSCRIPTEN)