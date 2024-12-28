#include "problem8.h"
#include "toolkit.h"
#include <fstream>
#include <string>
#include <iostream>

using ull = unsigned long long;

ull Problem8::solution() {
    // Possible optimization to consider is to ignore adjacent digits with at least one 0
    ull maxProduct = 0;
    std::ifstream f("data/problem8.txt");
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
        ull currentProduct = 1;
        for (const char* ptr = ptr1; ptr != ptr2 + 1; ++ptr) currentProduct *= *ptr - '0';
        if (currentProduct > maxProduct) maxProduct = currentProduct;
        ++ptr1;
        ++ptr2;
    }
    return maxProduct;
}