/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
 * Original video explanation: N/A
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were added/modified.
 */

#include <stdio.h>
#include <cmath>

void update(int* a, int* b) {
    // Complete this function
    int temp = *a;
    *a += *b;
    *b = std::abs(temp - *b);
}

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}