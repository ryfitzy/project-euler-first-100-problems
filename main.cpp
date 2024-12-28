#include <cstdio>
#include <sys/time.h>
#include <problem11.h>

int main(int, char**) {
    // start time
    timeval beg, end;
    gettimeofday(&beg, nullptr);

    // execute timed code section (change this line for different problems)
    const unsigned long long ans = Problem11::solution();

    // stop time
    gettimeofday(&end, nullptr);
    const double runtime = end.tv_sec - beg.tv_sec + (end.tv_usec - beg.tv_usec) / 1000000.0;

    // print results
    printf("Solution: %llu\n", ans);
    printf("Solution Runtime: %f s\n", runtime);
    return 0;
}
