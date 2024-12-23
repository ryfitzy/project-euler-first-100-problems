#include <cstdio>
#include <sys/time.h>
#include <Problems.h>

int main(int, char**) {
    // start time
    timeval beg, end;
    gettimeofday(&beg, nullptr);

    // execute timed code section (change this line for different problems)
    int ans = Problem2::solution();

    // stop time
    gettimeofday(&end, nullptr);
    const double runtime = end.tv_sec - beg.tv_sec + (end.tv_usec - beg.tv_usec) / 1000000.0;

    // print results
    printf("Solution: %d\n", ans);
    printf("Solution Runtime: %f s\n", runtime);
    return 0;
}
