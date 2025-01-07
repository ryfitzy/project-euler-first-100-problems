#include <iostream>
#include <sys/time.h>
#include <problem20.h>

int main(int, char**) {
    // start time
    timeval beg, end;
    gettimeofday(&beg, nullptr);

    // execute timed code section (change this line for different problems)
    auto ans = Problem20::solution();

    // stop time
    gettimeofday(&end, nullptr);
    const double runtime = end.tv_sec - beg.tv_sec + (end.tv_usec - beg.tv_usec) / 1000000.0;

    std::cout << "Solution: " << ans << std::endl;
    printf("Solution Runtime: %f s\n", runtime);
    return 0;
}
