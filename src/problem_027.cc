#include "problem_027.h"
#include "toolkit.h"

// Problem Link: https://projecteuler.net/problem=27



int problem_027::solution() {
  // Find all primes less than 1000 since b must be prime to start the chain at n=0
  std::vector<int> primes;
  for (int i = 2; i < 1000; ++i) {
    if (toolkit::isPrime(i)) {
      primes.push_back(i);
    }
  }

  int max_a, max_b;
  int max_primes = 0;

  for (int a = -1000; a < 1000; ++a) {
    for (int b : primes) {
      int n = 0;
      while (toolkit::isPrime(pow(n, 2) + a*n + b)) ++n;
      if (n > max_primes) {
        max_primes = n;
        max_a = a;
        max_b = b;
      }
    }
  }

  return max_a*max_b;
}

