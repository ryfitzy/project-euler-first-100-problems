#ifndef TOOLKIT
#define TOOLKIT

#include <vector>

namespace Toolkit {
    bool isPrime(const unsigned int);
    bool isPalindromicNumber(unsigned int);
    std::vector<int> primeFactorization(unsigned int);
    int numDivisors(const unsigned int);
    unsigned long long factorial(const unsigned long long);
}

#endif