#ifndef TOOLKIT
#define TOOLKIT

#include <string>
#include <vector>

namespace Toolkit {
    bool isPrime(const unsigned int);
    bool isPalindromicNumber(unsigned int);
    std::vector<int> primeFactorization(unsigned int);
    int numDivisors(const unsigned int);
    std::string factorial(const unsigned long long);
    std::string bigMultiply(std::string, std::string);
}

#endif