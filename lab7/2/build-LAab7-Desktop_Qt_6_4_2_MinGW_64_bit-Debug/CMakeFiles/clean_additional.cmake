# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\LAab7_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LAab7_autogen.dir\\ParseCache.txt"
  "LAab7_autogen"
  )
endif()
