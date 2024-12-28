#include "problem12.h"
#include "toolkit.h"
#include <iostream>

using ull = unsigned long long;

ull Problem12::solution() {
    // Really bad brute force solution (took over 7 minutes)
    ull currentNum = 1;
    ull currentTriangleNum = 1;
    while (Toolkit::numDivisors(currentTriangleNum) <= 500) {
        ++currentNum;
        currentTriangleNum += currentNum;
    }
    return currentTriangleNum;
}