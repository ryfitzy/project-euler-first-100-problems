#include "Problems.h"

// Problem 3 Description Link: https://projecteuler.net/problem=3

int Problem3::solution() {
    // Generic solution development
    unsigned long n = 600851475143;
    for (int i = 3; i < n; ++i) {
        if (n % i == 0 && Problem3::isPrime(i)) {
            n /= i;
            if(Problem3::isPrime(n)) return n;
        }
    }
    return -1;
}

bool Problem3::isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
