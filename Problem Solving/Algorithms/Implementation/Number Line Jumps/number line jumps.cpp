/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/kangaroo/problem
 * Original video explanation: https://www.youtube.com/watch?v=03hzFCgsD74
 * Last verified on: March 10, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * NOTE: This solution was updated following user feedback.
 */

// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
    double res = (double)(x1 - x2) / (v2 - v1);
    // Check if res isn't an INF value (if v2 - v1 = 0)
    if (res == floor(res) && res >= 0 && !isinf(res))
        return string("YES");

    return string("NO");
}