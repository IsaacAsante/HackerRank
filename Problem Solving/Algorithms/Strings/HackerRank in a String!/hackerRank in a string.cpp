/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem
 * Original video explanation: https://www.youtube.com/watch?v=QPdLaFvyhU0
 * Last verified on: 18 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// The word to find (add this line)
const string WORD = "hackerrank";

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    int pos = 0;
    for (int i = 0; i < s.size(); i++) {
        if (pos == WORD.size() - 1) break;
        if (s[i] == WORD[pos]) pos++;
    }
    return (pos == WORD.size() - 1) ? "YES" : "NO";
}