#include "problem_012.h"
#include "toolkit.h"

using ull = unsigned long long;

// Problem 12 Description Link: https://projecteuler.net/problem=12

ull problem_012::solution() {
  ull currentNum = 1;
  ull currentTriangleNum = 1;
  while (toolkit::numDivisors(currentTriangleNum) <= 500) {
    ++currentNum;
    currentTriangleNum += currentNum;
  }
  return currentTriangleNum;
}