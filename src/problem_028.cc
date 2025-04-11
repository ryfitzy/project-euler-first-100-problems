#include "problem_028.h"
#include "toolkit.h"

// Problem Link: https://projecteuler.net/problem=28

/*
  Approach: We can see that the upper right diagonal will increase
  in the following pattern: 1^2 -> 3^2 -> 5^2 -> 7^2 -> ... -> 1001^2

  Using these numbers as pivot points, we backtrack by the current row length - 1
  to grab the previous 3 diagonal numbers
*/

unsigned int problem_028::solution() {
  unsigned int sum = 1;
  int row_length = 3;

  for (int i = 0; i < 1001 / 2; ++i) {
    int upper_right_num = row_length*row_length;
    for (int j = 0; j < 4; ++j) {
      sum += upper_right_num - j*(row_length-1);
    }
    row_length += 2;
  }

  return sum;

}

