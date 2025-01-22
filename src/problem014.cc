#include "problem014.h"

using ull = unsigned long long;

// Problem 14 Description Link: https://projecteuler.net/problem=14

int Problem14::solution() {
    int maxStart = 1;
    int longestChain = 0;
    for (int i = 0; i < 1000000; ++i) {
        int currLength = 1;
        ull j = i;
        while (j > 1) {
            ++currLength;
            if (j % 2 == 0) j /= 2;
            else j = 3 * j + 1;
        }
        if (currLength > longestChain) {
            longestChain = currLength;
            maxStart = i;
        }
    }
    return maxStart;
}