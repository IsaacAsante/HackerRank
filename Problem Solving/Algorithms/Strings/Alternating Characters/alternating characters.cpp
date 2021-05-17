/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/alternating-characters/problem
 * Original video explanation: https://www.youtube.com/watch?v=rMEiTNZUJVg
 * Last verified on: May 16, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */
 
 // Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int match = 0;
    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] == s[i + 1]) match++;
    return match;
}