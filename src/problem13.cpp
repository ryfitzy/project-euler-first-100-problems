#include "problem13.h"
#include "toolkit.h"
#include <fstream>
#include <iostream>

void Problem13::solution() {
    std::ifstream f("data/problem13.txt");
    char nums[100][50];
    int sum[50];
    int carry = 0;
    for (int i = 0; i < 100; ++i) f.getline(nums[i], 51);
    f.close();
    for (int i = 49; i > -1; --i) {
        int subtotal = 0;
        for (int j = 0; j < 100; ++j) subtotal += nums[j][i] - '0';
        subtotal += carry;
        sum[i] = subtotal % 10;
        carry = subtotal / 10;
    }
    std::cout << carry;
    for (int i : sum) std::cout << i;
    std::cout << std::endl;
    return;
}