
/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/the-birthday-bar/problem
 * Original video explanation: https://www.youtube.com/watch?v=fmNMibWITPs
 * Last verified on: March 3, 2023
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the birthday function below.
int birthday(vector<int>& s, int& d, int& m) {
    int sum = 0, counter = 0, valid = 0;
    for (int i = 0; i < s.size(); i++) {
        counter++;
        sum += s[i];
        if (counter == m) {
            if (sum == d) ++valid;
            counter--;
            sum -= s[i - m + 1];
        }
    }
    return valid;
}