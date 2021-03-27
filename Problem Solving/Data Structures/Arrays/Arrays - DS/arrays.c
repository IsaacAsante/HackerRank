/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/arrays-ds/problem
 * Original video explanation: https://www.youtube.com/watch?v=PsjZDnd2Fus
 * Last verified on: March 27, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the reverseArray function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//
int* reverseArray(int a_count, int* a, int* result_count) {
    int middle = a_count / 2;
    for (int i = a_count - 1; i >= middle; i--) {
        int temp = a[i];
        a[i] = a[a_count - i - 1];
        a[a_count - i - 1] = temp;
    }

    *result_count = a_count;

    return a;
}