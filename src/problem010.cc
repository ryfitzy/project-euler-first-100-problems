#include "problem010.h"
#include "toolkit.h"

using ull = unsigned long long;

ull Problem10::solution() {
    ull sum = 0;
    for (int i = 0; i < 2000000; ++i)
        if (Toolkit::isPrime(i)) sum += i;
    return sum;
}