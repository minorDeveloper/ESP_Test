# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Espressif/frameworks/esp-idf-v4.4.2/components/bootloader/subproject"
  "C:/dev/ESP_Test/build/bootloader"
  "C:/dev/ESP_Test/build/bootloader-prefix"
  "C:/dev/ESP_Test/build/bootloader-prefix/tmp"
  "C:/dev/ESP_Test/build/bootloader-prefix/src/bootloader-stamp"
  "C:/dev/ESP_Test/build/bootloader-prefix/src"
  "C:/dev/ESP_Test/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/dev/ESP_Test/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
