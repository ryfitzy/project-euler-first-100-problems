#include <sys/time.h>
#include <iostream>
#include "problem_008.h"

int main() {
  // Start time
  timeval beg, end;
  gettimeofday(&beg, nullptr);

  // Execute timed code section (change this line for different problems)
  auto ans = problem_008::solution();

  // Stop time
  gettimeofday(&end, nullptr);
  const double runtime = end.tv_sec - beg.tv_sec + (end.tv_usec - beg.tv_usec);

  std::cout << "Solution: " << ans << std::endl;
  printf("Solution Runtime: %f s\n", runtime / 1000000.0);
  return 0;
}