/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/strange-advertising/problem
 * Original video explanation: https://www.youtube.com/watch?v=kZac2xyABqY
 * Last verified on: March 25, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int recipients = 5, likes = 2;
    if (n > 1) {
        for (int i = 2; i <= n; i++) {
            recipients = int(recipients / 2) * 3;
            likes += int(recipients / 2);
        }
    }
    return likes;
}