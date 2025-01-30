#include "problem_021.h"
#include "toolkit.h"

int problem_021::solution() {
  unsigned int sum = 0;
  unsigned int a = 1;
  while (a < 10000) {
    unsigned int a_divisor_sum = toolkit::properDivisorSum(a);
    unsigned int b = a + 1;
    while (b < 10000) {
      if (b == a_divisor_sum && a == toolkit::properDivisorSum(b)) sum += a + b;
      ++b;
    }
    ++a;
  }
  return sum;
}