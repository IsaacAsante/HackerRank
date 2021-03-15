/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/recursive-digit-sum/problem
 * Updated video explanation: https://www.youtube.com/watch?v=Z8jUZLxCxeM
 * Last verified on: March 8, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the superDigit function below.
int superDigit(string n, int k) {
    long super = 0;
    for (char& c : n)
        super += c - '0';

    super *= k;
    if (super <= 9) return super;
    return superDigit(to_string(super), 1);
}