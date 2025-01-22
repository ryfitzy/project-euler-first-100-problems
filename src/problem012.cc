#include "problem012.h"
#include "toolkit.h"

using ull = unsigned long long;

ull Problem12::solution() {
    ull currentNum = 1;
    ull currentTriangleNum = 1;
    while (Toolkit::numDivisors(currentTriangleNum) <= 500) {
        ++currentNum;
        currentTriangleNum += currentNum;
    }
    return currentTriangleNum;
}