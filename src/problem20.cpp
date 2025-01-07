#include "problem20.h"
#include "multiprecision.h"
#include "toolkit.h"
#include <iostream>

using namespace Toolkit;

/*
    Problem 20 Link: https://projecteuler.net/problem=20
    Solved by only using the information given.
*/ 

int Problem20::solution() {
    int sum = 0;
    cpp_int num = factorial(100);
    while (num > 0) {
        sum += int(num % 10);
        num /= 10;
    }
    return sum;
}