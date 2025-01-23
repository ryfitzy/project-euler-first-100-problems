#include "problem_017.h"

// Problem 17 Description Link: https://projecteuler.net/problem=17

int problem_017::solution() {
  int total = 0;
  int ones[] = {3,3,5,4,4,3,5,5,4};
  int teens[] = {3,6,6,8,8,7,7,9,8,8};
  int tens[] = {6,6,5,5,5,7,6,6};
  int hundred = 7;
  int hundredAnd = 10;

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      for (int k = 0; k < 10; ++k) {
        if (i == 0 && j == 0 && k == 0) {
          total += 11;
          continue;
        }
        if (i > 0) {
          if (j == 0 && k == 0) {
            total += ones[i-1] + hundred;
            continue;
          }
          total += ones[i-1] + hundredAnd;
        }
        if (j != 1) {
          if (j == 0) {
              total += ones[k-1];
              continue;
          }
          int prefix = tens[j-2];
          if (k == 0) {
              total += prefix;
              continue;
          }
          total += prefix + ones[k-1];
        }
        else {
          total += teens[k];
        }
      }
    }
  }
  return total;
}