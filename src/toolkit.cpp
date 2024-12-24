#include "toolkit.h"
#include <string>
#include <vector>

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