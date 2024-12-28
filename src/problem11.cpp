#include "problem11.h"
#include <fstream>

using ull = unsigned long long;

ull checkHorizontal(const int grid[20][20]) {
    ull max = 1;
    for (int i = 0; i < 20; ++i) {
        const int* ptr1 = &grid[i][0];
        const int* ptr2 = &grid[i][3];
        for (int j = 0; j < 17; ++j) {
            ull currProd = 1;
            for (const int* ptr = ptr1; ptr < ptr2 + 1; ++ptr) currProd *= *ptr;
            if (currProd > max) max = currProd;
            ++ptr1;
            ++ptr2;
        }
    }
    return max;
}

ull checkVertical(const int grid[20][20]) {
    ull max = 1;
    for (int i = 0; i < 20; ++i) {
        const int* ptr1 = &grid[0][i];
        const int* ptr2 = &grid[3][i];
        for (int j = 0; j < 17; ++j) {
            ull currProd = 1;
            for (const int* ptr = ptr1; ptr < ptr2 + 1; ptr += 20) currProd *= *ptr;
            if (currProd > max) max = currProd;
            ptr1 += 20;
            ptr2 += 20;
        }
    }
    return max;
}

ull checkLeftDiagonal(const int grid[20][20]) {
    ull max = 1;
    for (int i = 0; i < 17; ++i) {
        const int* ptr1 = &grid[i][0];
        const int* ptr2 = &grid[i+3][3];
        for (int j = 0; j < 17; ++j) {
            ull currProd = 1;
            for (const int* ptr = ptr1; ptr < ptr2 + 1; ptr += 21) currProd *= *ptr;
            if (currProd > max) max = currProd;
            ++ptr1;
            ++ptr2;
        }
    }
    return max;
}

ull checkRightDiagonal(const int grid[20][20]) {
    ull max = 1;
    for (int i = 0; i < 17; ++i) {
        const int* ptr1 = &grid[i][3];
        const int* ptr2 = &grid[i+3][0];
        for (int j = 0; j < 17; ++j) {
            ull currProd = 1;
            for (const int* ptr = ptr1; ptr < ptr2 + 1; ptr += 19) currProd *= *ptr;
            if (currProd > max) max = currProd;
            ++ptr1;
            ++ptr2;
        }
    }
    return max;
}

ull Problem11::solution() {
    std::ifstream f("data/problem11.txt");
    int grid[20][20];
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; ++j) {
            if(f.peek() == ' ' || f.peek() == '\n') {
                f.get();
                --j;
                continue;
            }
            grid[i][j] = 10 * (f.get() - '0') + (f.get() - '0');
        }
    }
    f.close();
    return std::max(std::max(checkHorizontal(grid), checkVertical(grid)), std::max(checkLeftDiagonal(grid), checkRightDiagonal(grid)));   
}