#include "Problem4.h"
#include "Toolkit.h"

int Problem4::solution() {
    int largestPalindrome = -1;
    int a = 100;
    while (a < 1000) {
        int b = a;
        while (b < 1000) {
            if (Toolkit::isPalindromicNumber(a*b) && a*b > largestPalindrome) {
                largestPalindrome = a*b;
            }
            ++b;
        }
        ++a;
    }
    return largestPalindrome;
}