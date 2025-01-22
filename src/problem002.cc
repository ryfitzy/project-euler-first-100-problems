#include "problem002.h"

// Problem 2 Description Link: https://projecteuler.net/problem=2

int Problem2::solution() {
    // Generic solution development
    unsigned int sum = 2, upperBound = 4000000, x = 1, y = 2;
    while (y < upperBound) {
        unsigned int next = x + y;
        if (next % 2 == 0) sum += next;
        x = y;
        y = next;
    }
    return sum;
}