#include "problem001.h"

// Problem 1 Description Link: https://projecteuler.net/problem=1

/*
  Approach: Instead of brute forcing every number from 1-999 to find every
  multiple of 3 or 5, we can instead think about the problem the following way:

  Sum = 3 + 5 + 6 + 9 + 10 + 12 + 15 + 18 + 20 + ... + 995 + 996 + 999
  = (3 + 6 + ... + 996 + 999) + (5 + 10 + ... + 990 + 995)
  - (15 + 30 + ... + 975 + 990)
  = 3 * (1 + 2 + ... + 332 + 333) + 5 * (1 + 2 + ... + 198 + 199)
  - 15 * (1 + 2 + ... + 65 + 66)
  = 3 * (333*334 / 2) + 5 * (199*200 / 2) - 15 * (66*67 / 2) = 233168

  Note that we subtract off all the multiples of 15 due to double counting
  as well as applying Gauss's formula for the sum of integers from 1 to k.
  The solution below generalizes this same approach.
*/

int problem_001::solution() {
  // Define needed for variables
  const unsigned int upperBound = 999;
  const unsigned int multi1 = 3;
  const unsigned int multi2 = 5;
  const unsigned int multi3 = multi1 * multi2;

  // Find the upper bound for each multiple
  const unsigned int multiBound1 = upperBound / multi1;
  const unsigned int multiBound2 = upperBound / multi2;
  const unsigned int multiBound3 = upperBound / multi3;

  // Apply Gauss's Formula to retrieve the sum of all multiples of 3, 5 and 15
  const unsigned int multiSum1 = multi1 * (multiBound1 * (multiBound1 + 1) / 2);
  const unsigned int multiSum2 = multi2 * (multiBound2 * (multiBound2 + 1) / 2);
  const unsigned int multiSum3 = multi3 * (multiBound3 * (multiBound3 + 1) / 2);

  return multiSum1 + multiSum2 - multiSum3;
}