/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/reduced-string/problem
 * Video explanation for solution using recursion: https://www.youtube.com/watch?v=cZVs3XA6gq0
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the superReducedString function below.
string superReducedString(string s) {
    if (s.size() >= 2) {
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                s = s.erase(i - 1, 2);
                if (s.empty()) return "Empty String";
                i = 0;
            }
        }
    }
    return s;
}