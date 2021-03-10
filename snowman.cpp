//
// Created by ravid on 04/03/2021.
//
#include "snowman.hpp"
#include <string>
#include <iostream>

namespace ariel {
    using namespace std;

    string snowman(int input) {
// first: input checks
        const int THE_LOWEST_INPUT = 11111111; // the lowest legal input
        const int NEXT_DIGIT = 10; // by doing --> input / NEXT_DIGIT
        const int LEGAL_INPUT_LENGTH = 8;
        int check = input; // with check we will test if the input is correct
        // check if the input is neg
        if (check < 0) {
            cout << "negative number!!!\n";
            throw std::exception();
        }

        // check if the input is to short
        if (check < THE_LOWEST_INPUT){
            cout << "less then 8 digits!!!\n";
            throw std::exception();
        }

        // check if the input is correct (every digit between 1 to 4)
        for (int i = 0; i < LEGAL_INPUT_LENGTH; ++i) {
            if (check % NEXT_DIGIT > 4 || check % NEXT_DIGIT == 0) {
                cout << "digits are not between 1-4 !!!\n";
                throw std::exception();
            }
            check = (int) (check / NEXT_DIGIT);
        }

        // check if the input is more then 8 digits
        if (check != 0) {
            cout << "more than 8 digits!!!\n";
            throw std::exception();

        }

        //now we build the snow man line by line from top to bottom
        //we do it by checking the "parts" array
        //parts[8] = { [0]=Hat, [1]=Nose, [2]=Left hand, [3]=Right hand, [4]=X-left eye, [5]=Y-right eye, [6]=Torso, [7]=Basic}
        int parts[LEGAL_INPUT_LENGTH] = {0};
        for (int i = LEGAL_INPUT_LENGTH - 1; i >= 0; --i) { // fill the parts array with the input
            parts[i] = input % NEXT_DIGIT;
            input = input / NEXT_DIGIT;
        }
        string ans;


        // hat
        switch (parts[0]) {
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
            default:;
        }

        // left hand if up
        switch (parts[4]) {
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
            default:;

        }

        // left eye
        switch (parts[2]) {
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
            default:;

        }

        // nose
        switch (parts[1]) {
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
            default:;

        }

        // right eye
        switch (parts[3]) {
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
            default:;

        }

        // right hand if up
        switch (parts[5]) {
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
            default:;

        }

        // left hand if down
        switch (parts[4]) {
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
            default:;

        }

        // torso
        switch (parts[6]) {
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
            default:;

        }

        // right hand if down
        switch (parts[5]) {
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
            default:;

        }

        // basic
        switch (parts[7]) {
            case 1:
                ans = ans + " ( : ) ";
                break;
            case 2:
                ans = ans + " (\" \") ";
                break;
            case 3:
                ans = ans + " (___) ";
                break;
            case 4:
                ans = ans + " (   ) ";
            default:;

        }


        return ans;
    }

}
