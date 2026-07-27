# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Text_to_PDF_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Text_to_PDF_autogen.dir\\ParseCache.txt"
  "Text_to_PDF_autogen"
  )
endif()
