/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
 * Original video explanation: https://www.youtube.com/watch?v=Mfqr6fhXUjw
 * Last verified on: April 22, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    short int digits = 0;
    while (n > 0) {
        digits += n % 10;
        n /= 10;
    }
    printf("%d", digits);
    return 0;
}
