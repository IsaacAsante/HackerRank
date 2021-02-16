/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/staircase/problem
 * Original video explanation: https://www.youtube.com/watch?v=EBOe_4xJV9o
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the staircase function below.
void staircase(int n) {
    for (int i = 1; i <= n; ++i)
        cout << setw(n) << right << string(i, '#') << endl;
}