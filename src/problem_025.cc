#include "multiprecision.h"
#include "problem_025.h"
#include "toolkit.h"

// Problem Link: https://projecteuler.net/problem=25

unsigned int problem_025::solution() {
  unsigned int index = 3;
  cpp_int x = 1;
  cpp_int y = 1;
  cpp_int z = x + y;
  while (z.str().length() != 1000) {
    x = y;
    y = z;
    z = x + y;
    ++index;
  }
  return index;
}

