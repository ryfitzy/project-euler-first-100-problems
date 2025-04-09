#include "multiprecision.h"
#include "problem_024.h"
#include "toolkit.h"
#include <string>

// Problem Link: https://projecteuler.net/problem=24

/*
  Approach: 

  The number of unique permutations of the 10 digits is 10! and
  since the lexicographic ordering starts at 0, we have 9! ways
  to order the remaining 9 digits

  That means the 9!+1-th lexicographic ordering will start with 1
  Since 9! < 1000000, we know the first digit does not start with 0.

  With the same previous reasoning, 9!+9!+1-th lexicographic ordering
  will start with 2. 9!+9! < 1000000, we know the first digit does not start with 1.

  Since 9!+9!+9! > 1000000, that means the millionth lexicographic ordering
  is some permutation that starts with 2.

  We continue this process knowing that there is 8! permutations starting with 20
  until we run out of remaining_digits.
*/

std::string problem_024::solution() {
  std::string result = "";
  const int position = 1000000;
  std::vector<int> remaining_digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int currPerm = 9;
  cpp_int currIndex = 0;
  while (!remaining_digits.empty()) {
    cpp_int subIndex = currIndex;
    cpp_int num_perms = toolkit::factorial(currPerm);
    int digit_pos = 0;
    while (subIndex + num_perms < position) {
      subIndex += num_perms;
      ++digit_pos;
    }
    currIndex = subIndex;
    result += '0' + remaining_digits[digit_pos];
    remaining_digits.erase(remaining_digits.begin() + digit_pos);
    --currPerm;
  }
  return result;
}

