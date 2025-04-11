#include "multiprecision.h"
#include "problem_029.h"
#include "toolkit.h"
#include <unordered_set>

// Problem Link: https://projecteuler.net/problem=29

unsigned int problem_029::solution() {
  std::unordered_set<cpp_int> distinct_terms;
  for (int a = 2; a < 101; ++a) {
    for (int b = 2; b < 101; ++b) {
      cpp_int prod = 1;
      for (int i = 0; i < b; ++i) {
        prod *= a;
      }
      distinct_terms.insert(prod);
    }
  }
  return distinct_terms.size();
}

