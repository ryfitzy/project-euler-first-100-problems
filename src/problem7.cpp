#include "problem7.h"
#include "toolkit.h"

int Problem7::solution() {
    int primeCounter = 0;
    int num = 1;
    while (primeCounter < 10001) {
        ++num;
        if (Toolkit::isPrime(num)) ++primeCounter;
    }
    return num;
}