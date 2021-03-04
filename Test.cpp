/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 *
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;


TEST_CASE("Good snowman code") {
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
            CHECK(ariel::snowman(33232124) == string("_\n(.,.)\n( : )\n( : )"));
    /* Add more checks here */






}

TEST_CASE("Bad snowman code") {

//    CHECK_THROWS(ariel::snowman(555));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(111111111));
    CHECK_THROWS(ariel::snowman(555));
    /* Add more checks here */
}


/* Add more test cases here */
