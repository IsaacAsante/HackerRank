/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/reverse-array-c/problem
 * Original video explanation: https://www.youtube.com/watch?v=RrlLNo_jBtY
 * Last verified on: April 22, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <stdio.h>

int main()
{
    int num, * arr, i;
    scanf("%d", &num);
    arr = (int*)malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for (i = 0; i < num / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
