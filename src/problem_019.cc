#include "problem_019.h"

// Problem 19 DescriptionLink: https://projecteuler.net/problem=19

int Problem19::solution() {
    // Current Day encoded by weekday, month, day, year
    int numSundays = 0;
    int currentDay[4] = {1, 1, 1, 1900};
    while (!(currentDay[3] == 2000 && currentDay[2] == 31 && currentDay[1] == 12)) {
        if (currentDay[2] == 1 && currentDay[0] == 7) {
            if (currentDay[3] > 1900) ++numSundays;
        }

        if (currentDay[0] == 7) currentDay[0] = 1;
        else ++currentDay[0];

        if (currentDay[2] == 28 && currentDay[1] == 2) {
            if (currentDay[3] % 4 == 0) {
                if (currentDay[3] % 100 != 0 || currentDay[3] % 400 == 0) {
                    ++currentDay[2];
                    continue;
                }
            }
            ++currentDay[1];
            currentDay[2] = 1;
            continue;
        }

        if (currentDay[2] == 29 && currentDay[1] == 2) {
            currentDay[2] = 1;
            ++currentDay[1];
            continue;
        }

        if (currentDay[2] == 30 && 
           (currentDay[1] == 4 || currentDay[1] == 6 || currentDay[1] == 9 || currentDay[1] == 11)) {
            ++currentDay[1];
            currentDay[2] = 1;
            continue;
        }

        if (currentDay[2] == 31) {
            if (currentDay[1] == 12) {
                currentDay[1] = 1;
                ++currentDay[3];
            }
            else {
                ++currentDay[1];
            }
            currentDay[2] = 1;
            continue;
        }
        ++currentDay[2];
    }

    return numSundays;
}