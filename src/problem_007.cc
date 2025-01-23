#include "problem_007.h"
#include "toolkit.h"

// Problem 7 Description Link: https://projecteuler.net/problem=7

int problem_007::solution() {
  int primeCounter = 0;
  int num = 1;
  while (primeCounter < 10001) {
    ++num;
    if (Toolkit::isPrime(num)) ++primeCounter;
  }
  return num;
}