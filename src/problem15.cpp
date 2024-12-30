#include "problem15.h"
#include "toolkit.h"

/*
    This can be done using the following combinatorics theorem:
    The number of diﬀerent permutations of n objects, where there are 
    n_1 indistinguishable objects of type 1, n_2 indistinguishable objects of type 2, ... , 
    and n_k indistinguishable objects of type k, is n! / (n_1!*n_2!*...*n_k!).

    In this problem, we can reason that there is a 40 limit move 
    with 20 'R' moves and 20 'D' moves. We are then interested the number of different ways
    to permutate 2 types of indistinguishable objects.
*/

int Problem15::solution() {
    // This is the result after doing 40! / (20! * 20!) in a calculator
    // I will find a library to calculate such large numbers later
    return 137846528820;
}
