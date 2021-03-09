//
// Created by ravid on 04/03/2021.
//
#include "snowman.hpp"
#include <string>
#include <array>
#include <iostream>

namespace ariel {
    using namespace std;

    string snowman(int input) {
// first: input checks
        int the_lowest_input = 11111111;
        const int NEXT_DIGIT = 10;
        const int LEGAL_DIGIT_NUM = 8;
        int check = input;

        if (check < 0) { // check if the input is neg
            cout << "negative number!!!\n";
            throw std::exception();
        }

        if (check < the_lowest_input){
            cout << "less then 8 digits!!!\n";
            throw std::exception();
        }

        for (int i = 0; i < LEGAL_DIGIT_NUM; ++i) { // simple check if the input is correct
            if (check % NEXT_DIGIT > 4 || check % NEXT_DIGIT == 0) {
                cout << "digits are not 1-4 !!!\n";
                throw std::exception();
            }
            check = (int) (check / NEXT_DIGIT);
        }
        if (check != 0) { // check if the input is more then 8 digits
            cout << "more than 8 digits!!!\n";
            throw std::exception();

        }

        //now we build the snow man line by line from top to bottom
        //we do it by checking the "parts" array
        //parts[8] = { Hat, Nose, Left hand, Right hand, X-left eye, Y-right eye, Torso, Basic}
        int parts[LEGAL_DIGIT_NUM] = {0};
        for (int i = LEGAL_DIGIT_NUM - 1; i >= 0; --i) { // fill the parts array with the input
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
                break;
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
        }


        return ans;
    }

}
