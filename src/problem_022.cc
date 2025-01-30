#include <fstream>
#include <map>
#include <string>
#include "problem_022.h"

unsigned int problem_022::solution() {
  std::map<std::string, int> nameScore;
  std::ifstream f("data/problem_022.txt");
  // Skip first quotation
  f.get();
  while (f.peek() != EOF) {
    std::string currName;
    int currScore = 0;
    while (f.peek() != '\"') {
      char currLetter = f.get();
      currName += currLetter;
      currScore += currLetter - 64;
    }
    nameScore[currName] = currScore;
    // Skip next 3 characters in the file
    f.get(); f.get(); f.get();
  }
  unsigned int sum = 0;
  int rank = 1;
  for (const auto &pair : nameScore) {
    sum += pair.second * rank;
    ++rank;
  }
  return sum;
}