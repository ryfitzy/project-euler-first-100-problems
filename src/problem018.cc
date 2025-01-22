#include "problem018.h"
#include <fstream>

// Problem 18 Description Link: https://projecteuler.net/problem=18

/*
    Fun fact: I miraculously guessed the maximal path
    before programming the solution by eyeballing it!
    Here is the path I found:
    75+64+82+87+82+75+73+28+83+32+91+78+58+73+93 = 1074
    This solution, however, does not brute force every path from top to bottom.
    It builds the maximal path from the bottom-up.
*/ 

int Problem18::solution() {
    std::ifstream f("data/problem18.txt");
    int triangle[15][15] = {0};
    int increment = 1;
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < increment; ++j) {
            if(f.peek() == ' ' || f.peek() == '\n') {
                f.get();
                --j;
                continue;
            }
            triangle[i][j] = 10 * (f.get() - '0') + (f.get() - '0');
        }
        ++increment;
    }
    f.close();
    
    int maxes[14] = {0};
    int decrement = 14;
    for (int i = 13; i > -1; --i) {
        for (int j = 0; j < decrement; ++j) {
            if (i == 13) {
                maxes[j] = triangle[i][j] + std::max(triangle[i+1][j], triangle[i+1][j+1]);
                continue;
            }
            maxes[j] = triangle[i][j] + std::max(maxes[j], maxes[j+1]);
        }
        --decrement;
    }
    return maxes[0];
}