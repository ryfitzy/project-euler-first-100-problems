#include "problem_020.h"
#include "multiprecision.h"
#include "toolkit.h"
#include <iostream>

using namespace Toolkit;

// Problem 20 Description Link: https://projecteuler.net/problem=20

int problem_020::solution() {
  int sum = 0;
  cpp_int num = factorial(100);
  std::string num_str = num.str();
  for (char digit : num_str) sum += digit - '0';
  return sum;
}