/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/for-loop-in-c/problem
 * Original video explanation: https://www.youtube.com/watch?v=CsjfnjhBZkw
 * Last verified on: April 22, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    const char* word[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) printf("%s\n", word[i - 1]);
        else if (i > 9 && i % 2 == 0) printf("even\n");
        else if (i > 9 && i % 2 == 1) printf("odd\n");
    }

    return 0;
}

