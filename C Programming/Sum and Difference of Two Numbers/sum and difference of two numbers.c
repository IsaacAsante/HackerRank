/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/sum-numbers-c/problem
 * Original video explanation: https://www.youtube.com/watch?v=pK7IPXA2lR0
 * Last verified on: April 22, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <stdio.h>

int main()
{
    int num1, num2;
    float f1, f2;

    // Get input
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &f1, &f2);

    printf("%d %d\n", num1 + num2, num1 - num2);
    printf("%.1f %.1f\n", f1 + f2, f1 - f2);

    return 0;
}
