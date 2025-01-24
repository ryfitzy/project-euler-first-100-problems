#include "problem_010.h"
#include "toolkit.h"

using ull = unsigned long long;

// Problem 10 Description Link: https://projecteuler.net/problem=10

ull problem_010::solution() {
  ull sum = 0;
  for (int i = 0; i < 2000000; ++i)
    if (toolkit::isPrime(i)) sum += i;
  return sum;
}