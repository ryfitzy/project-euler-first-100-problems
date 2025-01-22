#include "problem015.h"
#include "toolkit.h"
#include "multiprecision.h"

using namespace Toolkit;

// Problem 15 Description Link: https://projecteuler.net/problem=15

/*
    This can be done using the following combinatorics theorem:
    The number of diﬀerent permutations of n objects, where there are 
    n_1 indistinguishable objects of type 1, n_2 indistinguishable objects of type 2, ... , 
    and n_k indistinguishable objects of type k, is n! / (n_1!*n_2!*...*n_k!).

    In this problem, we can reason that there is a 40 limit move 
    with 20 'R' moves and 20 'D' moves. We are then interested the number of different ways
    to permutate 2 types of indistinguishable objects.
*/

cpp_int Problem15::solution() {
    return factorial(40) / (factorial(20) * factorial(20));
}
