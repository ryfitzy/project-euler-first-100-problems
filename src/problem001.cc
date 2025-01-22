#include "problem001.h"

// Problem 1 Description Link: https://projecteuler.net/problem=1

int Problem1::solution() {
    // A generalized approach solved in O(1) time using Gauss's Formula
    unsigned int upperBound = 1000, multiple1 = 3, multiple2 = 5, multiple3 = multiple1*multiple2;

    // Ensures to exclude the upper bound by subtracting one of the multiple bound of it divides the upper bound
    unsigned int multiBound1 = upperBound % multiple1 == 0 ? upperBound / multiple1 - 1 : upperBound / multiple1;
    unsigned int multiBound2 = upperBound % multiple2 == 0 ? upperBound / multiple2 - 1 : upperBound / multiple2;
    unsigned int multiBound3 = upperBound % multiple3 == 0 ? upperBound / multiple3 - 1 : upperBound / multiple3;

    // Apply Gauss's Formula to retrieve the sum of all multiples of 3 and 5 then subtract off their intersection
    return multiple1*(multiBound1 * (multiBound1 + 1) / 2) + 
           multiple2*(multiBound2 * (multiBound2 + 1) / 2) - 
           multiple3*(multiBound3 * (multiBound3 + 1) / 2);
}