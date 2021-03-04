//
// Created by ravid on 04/03/2021.
//
#include "snowman.hpp"
namespace ariel {
    using namespace std;
    char* snowman(int input) {

        int check = input;
        if (check < 0){throw "negative number!!!";} // check if the input is neg
        for (int i = 0; i < 8; ++i) { // simple check if the input is correct
            if (check % 10 > 4 || check % 10 == 0){
                throw "digits are not 1-4 !!!";
            } else{
                check = check / 10;
            }
        }
        if (check != 0){throw "more than 8 digits!!!" ;} // check if the input is more then 8 digits
        char *ans;




        return ans;
    }

}