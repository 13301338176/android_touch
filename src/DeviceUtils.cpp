//
// Created by kunaldawn on 11/10/17.
//

#include "DeviceUtils.h"

#include <sys/stat.h>

bool android_touch::DeviceUtils::isCharacterDevice(const std::string &file_path) {
    struct stat statbuf;

    if (stat(file_path.c_str(), &statbuf) == -1) {
        return false;
    }

    return S_ISCHR(statbuf.st_mode);
}
