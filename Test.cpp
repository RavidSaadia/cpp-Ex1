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

TEST_CASE ("Good snowman code- random cases") {

    //  check *every* kind of hats, hands, eyes, noses, torso and basic.(from 1-4)
    //
    //                          -HNLRXYTB-
            CHECK(ariel::snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
            CHECK(ariel::snowman(22221122) == string("  ___  \n ..... \n (o.o) \n<(] [)>\n (\" \") "));
            CHECK(ariel::snowman(33332233) == string("   _   \n  /_\\  \n\\(O_O)/\n (> <) \n (___) "));
            CHECK(ariel::snowman(44443344) == string("  ___  \n (_*_) \n (- -) \n/(   )\\\n (   ) "));
            CHECK(ariel::snowman(12341234) == string("       \n _===_ \n (O.-)/\n<(> <) \n (   ) "));
            CHECK(ariel::snowman(43214321) == string("  ___  \n (_*_) \n (o_.) \n (] [)\\\n ( : ) "));
            CHECK(ariel::snowman(43211234) == string("  ___  \n (_*_) \n (o_.)/\n<(> <) \n (   ) "));
            CHECK(ariel::snowman(14322341) == string("       \n _===_ \n\\(O o) \n (   )\\\n ( : ) "));
            CHECK(ariel::snowman(44222244) == string("  ___  \n (_*_) \n\\(o o)/\n (   ) \n (   ) "));
            CHECK(ariel::snowman(11223344) == string("       \n _===_ \n (o,o) \n/(   )\\\n (   ) "));
}
TEST_CASE ("hat checking") {
            CHECK(ariel::snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(21111111) == string("  ___  \n ..... \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(31111111) == string("   _   \n  /_\\  \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(41111111) == string("  ___  \n (_*_) \n (.,.) \n<( : )>\n ( : ) "));
}
TEST_CASE ("nose checking") {
            CHECK(ariel::snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(12111111) == string("       \n _===_ \n (...) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(13111111) == string("       \n _===_ \n (._.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(14111111) == string("       \n _===_ \n (. .) \n<( : )>\n ( : ) "));

}
TEST_CASE ("left eye checking") {
            CHECK(ariel::snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11211111) == string("       \n _===_ \n (o,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11311111) == string("       \n _===_ \n (O,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11411111) == string("       \n _===_ \n (-,.) \n<( : )>\n ( : ) "));

}
TEST_CASE ("right eye checking") {
            CHECK(ariel::snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11121111) == string("       \n _===_ \n (.,o) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11131111) == string("       \n _===_ \n (.,O) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11141111) == string("       \n _===_ \n (.,-) \n<( : )>\n ( : ) "));
}
TEST_CASE ("left hand checking") {
            CHECK(ariel::snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11112111) == string("       \n _===_ \n\\(.,.) \n ( : )>\n ( : ) "));
            CHECK(ariel::snowman(11113111) == string("       \n _===_ \n (.,.) \n/( : )>\n ( : ) "));
            CHECK(ariel::snowman(11114111) == string("       \n _===_ \n (.,.) \n ( : )>\n ( : ) "));
}
TEST_CASE ("right hand checking") {
            CHECK(ariel::snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11111211) == string("       \n _===_ \n (.,.)/\n<( : ) \n ( : ) "));
            CHECK(ariel::snowman(11111311) == string("       \n _===_ \n (.,.) \n<( : )\\\n ( : ) "));
            CHECK(ariel::snowman(11111411) == string("       \n _===_ \n (.,.) \n<( : ) \n ( : ) "));
}
TEST_CASE ("torso checking") {
            CHECK(ariel::snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11111121) == string("       \n _===_ \n (.,.) \n<(] [)>\n ( : ) "));
            CHECK(ariel::snowman(11111131) == string("       \n _===_ \n (.,.) \n<(> <)>\n ( : ) "));
            CHECK(ariel::snowman(11111141) == string("       \n _===_ \n (.,.) \n<(   )>\n ( : ) "));
}
TEST_CASE ("basic checking") {
            CHECK(ariel::snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(ariel::snowman(11111112) == string("       \n _===_ \n (.,.) \n<( : )>\n (\" \") "));
            CHECK(ariel::snowman(11111113) == string("       \n _===_ \n (.,.) \n<( : )>\n (___) "));
            CHECK(ariel::snowman(11111114) == string("       \n _===_ \n (.,.) \n<( : )>\n (   ) "));
}

TEST_CASE ("Bad snowman code") {

    //  testing wrong input from 1-7,9 digits, correct digits.
            CHECK_THROWS(ariel::snowman(1));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(12));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(123));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(1234));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(12341));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(123412));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(1234123));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(123412341));// ==> "more than 8 digits!!!"

// testing one wrong digit input from 8 digits, different place each time.
            CHECK_THROWS(ariel::snowman(12341235));// ==>"digits are not 1-4 !!!"
            CHECK_THROWS(ariel::snowman(12341283));// ==>"digits are not 1-4 !!!"
            CHECK_THROWS(ariel::snowman(23412923));// ==>"digits are not 1-4 !!!"
            CHECK_THROWS(ariel::snowman(23410223));// ==>"digits are not 1-4 !!!"
            CHECK_THROWS(ariel::snowman(23463223));// ==>"digits are not 1-4 !!!"
            CHECK_THROWS(ariel::snowman(23523223));// ==>"digits are not 1-4 !!!"
            CHECK_THROWS(ariel::snowman(28223223));// ==>"digits are not 1-4 !!!"
            CHECK_THROWS(ariel::snowman(61223223));// ==>"digits are not 1-4 !!!"

    // testing negative input from 1-9 digits, correct digits.
            CHECK_THROWS(ariel::snowman(-1));// ==>"negative number!!!"
            CHECK_THROWS(ariel::snowman(-12));// ==>"negative number!!!"
            CHECK_THROWS(ariel::snowman(-123));// ==>"negative number!!!"
            CHECK_THROWS(ariel::snowman(-1234));// ==>"negative number!!!"
            CHECK_THROWS(ariel::snowman(-12341));// ==>"negative number!!!"
            CHECK_THROWS(ariel::snowman(-123412));// ==>"negative number!!!"
            CHECK_THROWS(ariel::snowman(-1234123));// ==>"negative number!!!"
            CHECK_THROWS(ariel::snowman(-12432432));// ==>"negative number!!!"
            CHECK_THROWS(ariel::snowman(-124324323));// ==>"negative number!!!"


    // testing wrong input from 1-9 digits, wrong digits.
            CHECK_THROWS(ariel::snowman(9));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(98));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(987));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(9876));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(98765));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(987650));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(9876509));// ==>"less then 8 digits!!!"
            CHECK_THROWS(ariel::snowman(98765098));// ==>"digits are not 1-4 !!!"
            CHECK_THROWS(ariel::snowman(987650987));// ==>"digits are not 1-4 !!!"

}


