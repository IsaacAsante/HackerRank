/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/drawing-book/problem
 * Original video explanation: https://www.youtube.com/watch?v=_2FBco7uKjs
 * Last verified on: March 16, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the pageCount function below.
int pageCount(int n, int p) {
    return min(p / 2, n / 2 - p / 2);
}