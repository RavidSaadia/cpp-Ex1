//
// Created by ravid on 04/03/2021.
//
#include "snowman.hpp"
#include <string>
#include <array>
#include <iostream>
//#include <iterator>
//#include <algorithm>

namespace ariel {
    using namespace std;

    string snowman(int input) {
// input checks
        const int next_digit = 10;
        const int legal_digit_num = 8;
        int check = input;
        if (check < 0) { // check if the input is neg
            cout << "negative number!!!\n";
            throw std::exception();
        }
        for (int i = 0; i < legal_digit_num; ++i) { // simple check if the input is correct
            if (check % next_digit > 4 || check % next_digit == 0) {
                cout << "digits are not 1-4 !!!\n";
                throw std::exception();
            }
            check = (int) (check / next_digit);
        }
        if (check != 0) { // check if the input is more then 8 digits
            cout << "more than 8 digits!!!\n";
            throw std::exception();

        }
// build a snow man!!!
        int parts[legal_digit_num] = {0};
        check = input;
        for (int i = legal_digit_num - 1; i >= 0; --i) { // fill the parts array with the input
            parts[i] = check % next_digit;
            check = check / next_digit;
        }
        string ans;

        switch (parts[0]) {  // hat
            case 1:
                ans = "       \n _===_ \n";
                break;
            case 2:
                ans = "  ___  \n ..... \n";
                break;
            case 3:
                ans = "   _   \n  /_\\  \n";
                break;
            case 4:
                ans = "  ___  \n (_*_) \n";
                break;
            default:
                ;
        }
        switch (parts[4]) { // left hand if up
            case 1:
                ans = ans + " ";
                break;
            case 2:
                ans = ans + "\\";
                break;
            case 3:
                ans = ans + " ";
                break;
            case 4:
                ans = ans + " ";
        }
        switch (parts[2]) {// left eye
            case 1:
                ans = ans + "(.";
                break;
            case 2:
                ans = ans + "(o";
                break;
            case 3:
                ans = ans + "(O";
                break;
            case 4:
                ans = ans + "(-";
        }
        switch (parts[1]) {// nose
            case 1:
                ans = ans + ",";
                break;
            case 2:
                ans = ans + ".";
                break;
            case 3:
                ans = ans + "_";
                break;
            case 4:
                ans = ans + " ";
        }
        switch (parts[3]) {// right eye
            case 1:
                ans = ans + ".)";
                break;
            case 2:
                ans = ans + "o)";
                break;
            case 3:
                ans = ans + "O)";
                break;
            case 4:
                ans = ans + "-)";
        }
        switch (parts[5]) { // right hand if up
            case 1:
                ans = ans + " \n";
                break;
            case 2:
                ans = ans + "/\n";
                break;
            case 3:
                ans = ans + " \n";
                break;
            case 4:
                ans = ans + " \n";
        }
        switch (parts[4]) { // left hand if down
            case 1:
                ans = ans + "<";
                break;
            case 2:
                ans = ans + " ";
                break;
            case 3:
                ans = ans + "/";
                break;
            case 4:
                ans = ans + " ";
        }
        switch (parts[6]) { // torso
            case 1:
                ans = ans + "( : )";
                break;
            case 2:
                ans = ans + "(] [)";
                break;
            case 3:
                ans = ans + "(> <)";
                break;
            case 4:
                ans = ans + "(   )";
        }
        switch (parts[5]) { // right hand if down
            case 1:
                ans = ans + ">\n";
                break;
            case 2:
                ans = ans + " \n";
                break;
            case 3:
                ans = ans + "\\\n";
                break;
            case 4:
                ans = ans + " \n";
        }
        switch (parts[7]) { // basic
            case 1:
                ans = ans +" ( : ) " ;
                break;
            case 2:
                ans = ans +" (\" \") " ;
                break;
            case 3:
                ans = ans +" (___) " ;
                break;
            case 4:
                ans = ans +" (   ) " ;
        }

//        cout<<ans;
        return ans;
    }

}
