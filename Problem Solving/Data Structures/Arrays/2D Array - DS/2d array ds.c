/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/2d-array/problem
 * Original video explanation: https://www.youtube.com/watch?v=SEmNNbdqdfo
 * Last verified on: March 27, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the hourglassSum function below.
int hourglassSum(int arr_rows, int arr_columns, int** arr) {
    int max_hourglass = -63; // See problem constraints
    for (size_t i = 0; i < arr_rows - 2; i++) {
        for (int j = 2; j < arr_columns; j++) {
            int k = j - 2, hourglass = 0;
            while (k <= j) {
                hourglass += arr[i][k] + arr[i + 2][k];
                ++k;
            }
            hourglass += arr[i + 1][j - 1]; // Middle value
            max_hourglass = (hourglass > max_hourglass) ? hourglass : max_hourglass;
        }
    }
    return max_hourglass;
}