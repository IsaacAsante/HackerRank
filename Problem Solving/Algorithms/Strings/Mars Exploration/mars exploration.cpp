/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/mars-exploration/problem
 * Original video explanation: https://www.youtube.com/watch?v=hFOptjKaRtg
 * Last verified on: 18 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * Try altering the code to make the solution flexible with other strings
 */

// Complete the marsExploration function below.
int marsExploration(string s) {
    int errors = 0, first = 0, second = 1, third = 2;
    while (third < s.size()) {
        if (s[first] != 'S') errors++;
        if (s[second] != 'O') errors++;
        if (s[third] != 'S') errors++;
        first += 3, second += 3, third += 3;
    }
    return errors;
}