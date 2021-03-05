//
// Created by ravid on 04/03/2021.
//
#include "snowman.hpp"
#include <string>
#include <iostream>

namespace ariel {
    using namespace std;
    string  snowman(int input) {
        const int next_digit = 10;
        const int legal_digit_num = 8;

        int check = input;

        if (check < 0) { // check if the input is neg
            cout<<"negative number!!!\n";
            throw std::exception();

        }
        for (int i = 0; i < legal_digit_num; ++i) { // simple check if the input is correct


              if (check % next_digit > 4 || check % next_digit == 0) {
              cout<< "digits are not 1-4 !!!\n";
                  throw std::exception();
              }


                check = (int) (check / next_digit);

        }
        if (check != 0) { // check if the input is more then 8 digits
       cout<<"more than 8 digits!!!\n";
            throw std::exception();

        }


        string s = "";
        return s;
    }

}
