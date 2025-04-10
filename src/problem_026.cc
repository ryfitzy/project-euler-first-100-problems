#include "problem_026.h"
#include "toolkit.h"
#include <unordered_map>

// Problem Link: https://projecteuler.net/problem=26

unsigned int find_cycle_length(int divisor) {
  int dividend = 1;
  std::vector<int> quotient_digits;
  std::unordered_map<int, int> discovered_dividends;
  int index = 0;

  do {
    discovered_dividends[dividend] = index;
    int quotient = dividend / divisor;
    if (quotient > 0) dividend -= quotient * divisor;
    if (dividend == 0) return 0;
    dividend *= 10;
    quotient_digits.push_back(quotient);
    ++index;
  } while (discovered_dividends.find(dividend) == discovered_dividends.end());

  return index - discovered_dividends[dividend];
}

unsigned int problem_026::solution() {
  unsigned int max_length = 0;
  unsigned int max_length_divisor = 0;
  for (unsigned int divisor = 1; divisor < 1000; ++divisor) {
    unsigned int cycle_length = find_cycle_length(divisor);
    if (cycle_length > max_length) {
      max_length = cycle_length;
      max_length_divisor = divisor;
    }
  }
  return max_length_divisor;
}

