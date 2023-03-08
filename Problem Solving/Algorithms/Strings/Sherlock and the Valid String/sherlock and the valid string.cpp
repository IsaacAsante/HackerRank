// TODO: Record the video for the "Sherlock and the Valid String" challenge in C++.

/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem
 * Original video explanation: https://www.youtube.com/watch?v=Lm9RrHZKXhc
 * Last verified on: 06 January, 2023
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

string isValid(string s) {
    // Use a fixed-width array for ASCII values (all 0 at first)
    short int alpha[26] = {0};
    for (char& c : s)
        alpha[c-97]++; // Count all the appearances for every char
    int frequency = 0, invalid = 0;
    for (int i = 0; i < 26; i++) {
        // Only consider values appearing at least once
        if (alpha[i] > 0) {
            // Record the frequency that must be shared by every char
            if (frequency == 0) frequency = alpha[i];
            // Record any mismatch detected
            else if (frequency > 0 && frequency != alpha[i]) invalid++;
            // There can't be more than 1 mismatch
            if (invalid > 1) return "NO";
        }
    }
    
    return "YES"; 
    
}