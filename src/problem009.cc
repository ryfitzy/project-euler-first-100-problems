#include "problem009.h"
#include "toolkit.h"
#include <cmath>

using ull = unsigned long long;

// Problem 9 Description Link: https://projecteuler.net/problem=9

ull Problem9::solution() {
    // Generic brute force solution, might optimize later
    int a = 1, b = 2, c = 3;
    for (int i = c; i < 500; ++i)
        for (int j = b; j < i; ++j)
            for (int k = a; k < j; ++k)
                if (i+j+k == 1000 && pow(i,2) == pow(j,2) + pow(k,2)) 
                    return i*j*k;
    return 0;
}