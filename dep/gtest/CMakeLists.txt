# if(UNIX)
#   # Look for an installed bzip2 on unix
#   find_package(GTest REQUIRED)
#   # GTest 的头文件
#   include_directories(${GTEST_INCLUDE_DIRS})
# else()
  # Use the bundled source on windows
# file(GLOB sources src/*.c src/*.h include/*h include/gtest/*h include/gtest/internal/*h include/internal/custom/*h)

file(GLOB sources src/*.cc src/*.h include/*h include/gtest/*h include/gtest/internal/*h include/internal/custom/*h)
add_library(gtest STATIC ${sources})

target_include_directories(gtest
  PUBLIC
    ${BUILDDIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(gtest
  PRIVATE
    rendu-dependency-interface
  PUBLIC
    threads
  ${CMAKE_DL_LIBS})

set_target_properties(gtest
    PROPERTIES
      FOLDER
        "dep")    
