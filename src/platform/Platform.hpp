#pragma once

namespace platform {

    // Function to check if the platform is iOS
    inline bool isIOS() {
#ifdef __IOS__
        return true;
#else
        return false;
#endif
    }

    // Function to check if the platform is Android
    inline bool isAndroid() {
#ifdef __ANDROID__
        return true;
#else
        return false;
#endif
    }

    // Function to check if the platform is macOS
    inline bool isMacOS() {
#ifdef __MACOS__
        return true;
#else
        return false;
#endif
    }

    // Function to check if the platform is Windows
    inline bool isWindows() {
#ifdef _WIN32
        return true;
#else
        return false;
#endif
    }

}
