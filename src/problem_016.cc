#include "multiprecision.h"
#include "problem_016.h"

// Problem 16 Description Link: https://projecteuler.net/problem=16

cpp_int problem_016::solution() {
  cpp_int num = 2, sum = 0;
  for (int i = 0; i < 999; ++i) num *= 2;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  sum += num;
  return sum;
}
