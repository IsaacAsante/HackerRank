/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/strong-password/problem
 * Original video explanation: https://www.youtube.com/watch?v=PHMuSMQm33I
 * Last verified on: March 25, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int lower = 1, upper = 1, digit = 1, special = 1;
    int size = password.size();
    string s("!@#$%^&*()-+");
    for (char& c : password) {
        // Note: You may consider regex instead
        if (c >= 'A' && c <= 'Z') upper = 0;
        else if (c >= 'a' && c <= 'z') lower = 0;
        else if (c >= '0' && c <= '9') digit = 0;
        else if (s.find(c) != string::npos) special = 0;
    }
    int total = lower + upper + digit + special;
    return max(6 - size, total);
}