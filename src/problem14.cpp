#include "problem14.h"
#include "toolkit.h"
#include <iostream>

using ull = unsigned long long;

int Problem14::solution() {
    int maxStart = 1;
    ull longestChain = 0;
    for (ull i = 0; i < 1000000; ++i) {
        ull currLength = 1;
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