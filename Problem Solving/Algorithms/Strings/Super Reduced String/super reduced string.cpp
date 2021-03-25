/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/reduced-string/problem
 * Original video explanation: https://www.youtube.com/watch?v=cZVs3XA6gq0
 * Last verified on: March 25, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the superReducedString function below.
string superReducedString(string s) {
    if (s.empty()) return "Empty String";
    if (s.size() >= 2) {
        for (int i = 1; i < s.size(); i++)
            if (s[i] == s[i - 1])
                return superReducedString(s.erase(i - 1, 2));
    }
    return s;
}