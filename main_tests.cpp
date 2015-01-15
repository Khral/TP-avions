/*
 * File:   main_tests.cpp
 * Author: Etienne et Samuel
 *
 * Created on 1 décembre 2014, 09:42
 */

 #include <gtest/gtest.h>

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
