#include "problem005.h"
#include "toolkit.h"
#include <vector>
#include <array>

int Problem5::solution() {
    unsigned int ans = 1;
    std::vector<std::array<int, 2>> primes;
    std::vector<std::vector<int>> composites;

    for (int i = 2; i < 21; ++i) {
        if (Toolkit::isPrime(i)) primes.push_back({i, 1});
        else composites.push_back(Toolkit::primeFactorization(i));
    }

    for (std::array<int, 2>& prime : primes) {
        for (const std::vector<int> primeFactors : composites) {
            int freq = 0;
            for (const int primeFactor : primeFactors) {
                if (prime[0] == primeFactor) ++freq;
            }
            if (freq > prime[1]) prime[1] = freq;
        }
    }

    for (const std::array<int, 2> prime : primes)
        for(int i = 0; i < prime[1]; ++i)
            ans *= prime[0];

    return ans;
}