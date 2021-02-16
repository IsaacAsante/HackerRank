/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/diagonal-difference/problem
 * Original video explanation: https://www.youtube.com/watch?v=sHUyrwrIJCs
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int i, j, size, diag1, diag2;
    i = j = diag1 = diag2 = 0;
    size = arr.size();
    j = size - 1;
    while (i < size) {
        diag1 += arr[i][i];
        diag2 += arr[i][j];
        ++i;
        j--;
    }
    return abs(diag1 - diag2);
}