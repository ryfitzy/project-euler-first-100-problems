#include <fstream>
#include <string>
#include "multiprecision.h"
#include "problem_008.h"
#include "toolkit.h"

// Problem 8 Description Link: https://projecteuler.net/problem=8

cpp_int problem_008::solution() {
  // Possible optimization to consider is to ignore adjacent digits with at least one 0
  cpp_int maxProduct = 0;
  std::ifstream f("data/problem_008.txt");
  std::string input;
  while (f.peek() != EOF) {
    std::string line;
    getline(f, line);
    input += line;
  }
  f.close();
  
  char* ptr1 = &input[0];
  char* ptr2 = &input[12];
  while(*ptr2 != '\0') {
    cpp_int currentProduct = 1;
    for (const char* ptr = ptr1; ptr != ptr2 + 1; ++ptr) {
      currentProduct *= *ptr - '0';
      if (currentProduct == 0) break;
    }
    if (currentProduct > maxProduct) maxProduct = currentProduct;
    ++ptr1;
    ++ptr2;
  }
  return maxProduct;
}