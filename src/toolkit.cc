#include "toolkit.h"
#include "multiprecision.h"

using ull = unsigned long long;

bool toolkit::isPrime(const unsigned int n) {
  if (n <= 1) return false;
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) return false;
  }
  return true;
}

bool toolkit::isPalindromicNumber(unsigned int num) {
  int reversed = 0, original = num;

  while (num > 0) {
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }

  return original == reversed;
}

std::vector<int> toolkit::primeFactorization(unsigned int num) {
  std::vector<int> primeFactors;
  for (int i = 2; i <= num; ++i) {
    while (num % i == 0 && toolkit::isPrime(i)) {
      primeFactors.push_back(i);
      num /= i;
    }
  }
  return primeFactors;
}

int toolkit::numDivisors(const unsigned int num) {
  int numDivisors = 0;
  int upperBound = std::sqrt(num);
  for (int i = 1; i <= upperBound; ++i) {
    if (num % i == 0) numDivisors += 2;
    if (i == num / i) --numDivisors;
  }
  return numDivisors; 
}

cpp_int toolkit::factorial(const unsigned long long num) {
  cpp_int fact = 1;
  for (int i = num; i > 1; --i) {
    fact *= i;
  }
  return fact;
}

int toolkit::properDivisorSum(const unsigned int num) {
  unsigned int sum = 0;
  for (unsigned int i = 1; i <= num / 2; ++i) {
    if (num % i == 0) sum += i;
  }
  return sum;
}