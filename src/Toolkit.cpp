#include "Toolkit.h"
#include <string>

bool Toolkit::isPrime(const unsigned int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool Toolkit::isPalindromicNumber(unsigned int num) {
    std::string str = std::to_string(num);
    for (int i = 0; i < str.length(); ++i)
        if (str[i] != str[str.length()-1 - i]) return false;
    return true;
}