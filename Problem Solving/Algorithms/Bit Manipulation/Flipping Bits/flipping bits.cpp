/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/flipping-bits/problem
 * Original video explanation: https://www.youtube.com/watch?v=-wfAmD04CFw
 * Last verified on: 20 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the flippingBits function below.
long flippingBits(long& n) {
    // return (uint) ~n;
    for (int i = 0; i < 32; i++)
        n ^= 1U << i;

    return n;
}