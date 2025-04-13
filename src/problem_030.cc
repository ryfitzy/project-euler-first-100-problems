#include "multiprecision.h"
#include "problem_030.h"
#include "toolkit.h"

// Problem Link: https://projecteuler.net/problem=30

/*
  Approach: The maximum possible sum of the fifth powers of digits
  is n * 9^5. The smallest n-digit number is 10^(n-1), so if 
  n * 9^5 < 10^(n-1) then it's possible for any n-digit number to be written
  as the sum of fifth powers of its digits because the sum is too small to
  ever reach that number.

  When n = 7, then 7 * 9^5 = 413343 < 10^(7-1) = 1000000, so 1000000
  is an upper bound since no 7-digit number can possibly be written as
  the sum of fifth powers of its digits.

*/

unsigned int problem_030::solution() {
  unsigned int totalSum = 0;
  for (int i = 10; i < 1000000; ++i) {
    int currNum = i;
    int currSum = 0;
    while (currNum != 0) {
      currSum += pow(currNum % 10, 5);
      currNum /= 10;
    }
    if (currSum == i) {
      totalSum += i;
    }
  }
  return totalSum;
}

