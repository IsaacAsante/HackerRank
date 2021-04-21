/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
 * Original video explanation: https://www.youtube.com/watch?v=CTjoeH5VLQM
 * Last verified on: April 22, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    int digits[10] = { 0 };
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        // Checking with ASCII decimal representation
        if (str[i] >= 48 && str[i] <= 57)
            digits[str[i] - 48]++;
    }
    // Print digits array elements
    for (int i = 0; i < 10; i++) {
        printf("%d ", digits[i]);
    }
    return 0;
}
