if(EXISTS "G:/projects/cplus/LIBRARY/cmake_gtest/build/tests[1]_tests.cmake")
  include("G:/projects/cplus/LIBRARY/cmake_gtest/build/tests[1]_tests.cmake")
else()
  add_test(tests_NOT_BUILT tests_NOT_BUILT)
endif()
