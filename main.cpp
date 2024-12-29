#include <iostream>
#include <sys/time.h>
#include <problem13.h>

int main(int, char**) {
    // start time
    timeval beg, end;
    gettimeofday(&beg, nullptr);

    // execute timed code section (change this line for different problems)
    std::cout << "Solution: " << Problem13::solution() << std::endl;

    // stop time
    gettimeofday(&end, nullptr);
    const double runtime = end.tv_sec - beg.tv_sec + (end.tv_usec - beg.tv_usec) / 1000000.0;

    printf("Solution Runtime: %f s\n", runtime);
    return 0;
}
