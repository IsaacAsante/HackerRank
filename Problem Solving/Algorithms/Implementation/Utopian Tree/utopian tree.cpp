/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/utopian-tree/problem
 * Original video explanation: https://www.youtube.com/watch?v=pBTHYj_r4Tk
 * Last verified on: March 16, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the utopianTree function below.
int utopianTree(int n) {
    int cycle = 0, height = 1;
    if (n != 0) {
        while (++cycle <= n) {
            if (cycle % 2 == 1) height *= 2;
            else height++;
        }
    }
    return height;
}