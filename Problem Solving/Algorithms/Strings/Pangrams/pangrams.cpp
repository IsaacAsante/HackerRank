/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/pangrams/problem
 * Original video explanation: https://www.youtube.com/watch?v=OnFypgUdFvQ
 * Last verified on: 18 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the pangrams function below.
string pangrams(string s) {
    int arr[26] = { 0 }; // Set everything to 0.
    for (char& c : s) {
        if (c >= 97 && c <= 122) arr[c - 97] = 1; // lowercase
        else if (c >= 65 && c <= 90) arr[c - 65] = 1; // uppercase
    }
    for (int i = 0; i < 26; i++)
        if (arr[i] == 0) return "not pangram";
    return "pangram";
}