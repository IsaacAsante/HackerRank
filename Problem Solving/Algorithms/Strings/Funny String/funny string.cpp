/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/funny-string/problem
 * Original video explanation: https://www.youtube.com/watch?v=dL7UuOs8jy8
 * Last verified on: 18 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the funnyString function below.
string funnyString(string s) {
    for (int i = 0, j = s.size() - 1; i < s.size() - 1, j > 0; i++, j--) {
        if (abs(s[i] - s[i + 1]) != abs(s[j] - s[j - 1]))
            return "Not Funny";
    }
    return "Funny";
}