# CMake generated Testfile for 
# Source directory: /Users/meganstark/Computation*/opensource/CLHEP/Exceptions/test
# Build directory: /Users/meganstark/Computation*/opensource/bin/Exceptions/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(testExceptions.sh "/Users/meganstark/Computation*/opensource/bin/Exceptions/test/testExceptions.sh")
add_test(testThrowFrom.sh "/Users/meganstark/Computation*/opensource/bin/Exceptions/test/testThrowFrom.sh")
add_test(exctest1.sh "/Users/meganstark/Computation*/opensource/bin/Exceptions/test/exctest1.sh")
add_test(exctest2.sh "/Users/meganstark/Computation*/opensource/bin/Exceptions/test/exctest2.sh")
add_test(exctest3.sh "/Users/meganstark/Computation*/opensource/bin/Exceptions/test/exctest3.sh")
add_test(exctest4.sh "/Users/meganstark/Computation*/opensource/bin/Exceptions/test/exctest4.sh")
add_test(exctestNothrow.sh "/Users/meganstark/Computation*/opensource/bin/Exceptions/test/exctestNothrow.sh")
add_test(testzmex.sh "/Users/meganstark/Computation*/opensource/bin/Exceptions/test/testzmex.sh")
set_tests_properties(testzmex.sh PROPERTIES  WILL_FAIL "TRUE")
