#ifndef TOOLKIT
#define TOOLKIT

#include "multiprecision.h"

namespace Toolkit {
    bool isPrime(const unsigned int);
    bool isPalindromicNumber(unsigned int);
    std::vector<int> primeFactorization(unsigned int);
    int numDivisors(const unsigned int);
    cpp_int factorial(const unsigned long long);
}

#endif