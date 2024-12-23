#include "Problem1.h"

int Problem1::solution() {
    // A generalized approach solved in O(1) time using Gauss's Formula
    int upperBound = 1000;
    int multiple1 = 3;
    int multiple2 = 5;
    int multiple3 = multiple1*multiple2;

    // Ensures to exclude the upper bound by subtracting one of the multiple bound of it divides the upper bound
    int multiBound1 = upperBound % multiple1 == 0 ? upperBound / multiple1 - 1 : upperBound / multiple1;
    int multiBound2 = upperBound % multiple2 == 0 ? upperBound / multiple2 - 1 : upperBound / multiple2;
    int multiBound3 = upperBound % multiple3 == 0 ? upperBound / multiple3 - 1 : upperBound / multiple3;

    // Apply Gauss's Formula
    return multiple1*(multiBound1 * (multiBound1 + 1) / 2) + 
           multiple2*(multiBound2 * (multiBound2 + 1) / 2) - 
           multiple3*(multiBound3 * (multiBound3 + 1) / 2);
}