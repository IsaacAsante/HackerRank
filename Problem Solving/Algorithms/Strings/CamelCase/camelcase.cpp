/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/camelcase/problem
 * Original video explanation: https://www.youtube.com/watch?v=TlTPSlmZqyU
 * Last verified on: 18 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the camelcase function below.
int camelcase(string& s) {
    int words = 0;
    for (char& c : s)
        if (int(c) >= 65 && int(c) <= 90) words++;

    return ++words;
}