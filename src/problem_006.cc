#include "problem_006.h"
#include <cmath>

// Problem 6 Description Link: https://projecteuler.net/problem=6

int Problem6::solution() {
    int sumOfSquares = 0;
    for (int i = 1; i < 101; i++) sumOfSquares += pow(i, 2);
    int squareOfSums = pow(100*(100+1)/2, 2);
    return squareOfSums - sumOfSquares;
}