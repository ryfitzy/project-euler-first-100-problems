#include "problem_023.h"
#include "toolkit.h"
#include <unordered_set>

unsigned int problem_023::solution() {
  unsigned int total = 0;
  std::vector<int> abundant_nums;
  std::unordered_set<int> sum_of_abundants;

  for (int i = 1; i < 28123; ++i) {
    if (toolkit::isPerfectNumber(i) == '>') {
      abundant_nums.push_back(i);
    }
  }

  for (int i = 0; i < abundant_nums.size(); ++i) {
    for (int j = i; j < abundant_nums.size(); ++j) {
      sum_of_abundants.insert(abundant_nums[i] + abundant_nums[j]);
    }
  }
  
  for (int i = 1; i < 28123; ++i) {
    if (sum_of_abundants.find(i) == sum_of_abundants.end()) {
      total += i;
    }
  }

  return total;
}