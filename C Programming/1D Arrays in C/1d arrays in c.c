/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
 * Original video explanation: https://www.youtube.com/watch?v=5vqz8wdnyRY
 * Last verified on: April 22, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <stdio.h>

int main() {

    int n, sum = 0, element;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &element);
        a[i] = element;
        sum += element;
    }
    printf("%d", sum);
    return 0;
}
