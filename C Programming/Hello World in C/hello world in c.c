/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/hello-world-c/problem
 * Original video explanation: https://www.youtube.com/watch?v=2hfcvEyOQIg
 * Last verified on: April 21, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <stdio.h>

int main()
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n%s", s);
    return 0;
}
