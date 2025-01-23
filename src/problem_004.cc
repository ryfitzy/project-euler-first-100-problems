#include "problem_004.h"
#include "toolkit.h"

// Problem 4 Description Link: https://projecteuler.net/problem=4

int problem_004::solution() {
  int largestPalindrome = -1;
  int a = 999;
  while (a > 100) {
    int b = a;
    while (a*b > largestPalindrome && b > 100) {
      if (Toolkit::isPalindromicNumber(a*b)) {
        largestPalindrome = a*b;
      }
      --b;
    }
    --a;
  }
  return largestPalindrome;
}