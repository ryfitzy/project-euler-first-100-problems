#include "Problem3.h"
#include "Toolkit.h"

// Problem 3 Description Link: https://projecteuler.net/problem=3

int Problem3::solution() {
    // Generic solution development
    unsigned long n = 600851475143;
    for (int i = 3; i < n; ++i) {
        if (n % i == 0 && Toolkit::isPrime(i)) {
            n /= i;
            if(Toolkit::isPrime(n)) return n;
        }
    }
    return -1;
}

