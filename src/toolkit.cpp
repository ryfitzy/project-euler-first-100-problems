#include "toolkit.h"
#include <boost/multiprecision/cpp_int.hpp>

using ull = unsigned long long;
using namespace boost::multiprecision;

bool Toolkit::isPrime(const unsigned int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool Toolkit::isPalindromicNumber(unsigned int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

std::vector<int> Toolkit::primeFactorization(unsigned int num) {
    std::vector<int> primeFactors;
    for (int i = 2; i <= num; ++i) {
        while (num % i == 0 && Toolkit::isPrime(i)) {
            primeFactors.push_back(i);
            num /= i;
        }
    }
    return primeFactors;
}

int Toolkit::numDivisors(const unsigned int num) {
    int numDivisors = 0;
    int upperBound = std::sqrt(num);
    for (int i = 1; i <= upperBound; ++i) {
        if (num % i == 0) numDivisors += 2;
        if (i == num / i) --numDivisors;
    }
    return numDivisors; 
}

std::string Toolkit::factorial(const unsigned long long num) {
    cpp_int fact = 1;
    for (int i = num; i > 1; --i) {
        fact *= i;
    }
    return fact.str();
}

std::string Toolkit::bigMultiply(std::string n1, std::string n2) {
    return "";
}
