/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <ravid saadia>
 *
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
#include <string>

using namespace ariel;
using namespace std;

//const string[5] = {"",""};
TEST_CASE("Good snowman code") {

            CHECK(ariel::snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
            CHECK(ariel::snowman(22221122) == string("  ___  \n ..... \n (o.o) \n<(] [)>\n (\" \") "));
            CHECK(ariel::snowman(33332233) == string("   _   \n  /_\\  \n\\(O_O)/\n (> <) \n (___) "));
            CHECK(ariel::snowman(44443344) == string("  ___  \n (_*_) \n (- -) \n/(   )\\\n (   ) "));
            CHECK(ariel::snowman(12341234) == string("  ___  \n (_*_) \n (- -) \n/(   )\\\n (   ) "));
    /* Add more checks here */






}

TEST_CASE("Bad snowman code") {

    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(-11432432));
    CHECK_THROWS(ariel::snowman(-19432432));
    CHECK_THROWS(ariel::snowman(0));
    CHECK_THROWS(ariel::snowman(00000000));
    CHECK_THROWS(ariel::snowman(555));
    CHECK_THROWS(ariel::snowman(2223));
    CHECK_THROWS(ariel::snowman(55234));
    /* Add more checks here */
}


/* Add more test cases here */
