/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/palindrome-index/problem
 * Original video explanation: https://www.youtube.com/watch?v=1bO0ylzROOo
 * Last verified on: March 25, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the palindromeIndex function below.
// You may clean up the comments to make the code clearer :)
int palindromeIndex(string s) {
    int i = 0, j = s.size() - 1; // Pointers to the start/end
    int stored_i = i, stored_j = j; // Default values
    bool error = false; // No error yet, at the beginning
    // A two-character word is a palindrome by default
    if (s.size() >= 3) {
        while (i <= j) {
            if (s[i] != s[j]) {
                // If i was skipped earlier, and there's yet another mismatch, then j was the culprit
                if (error) return stored_j;
                error = true; // Record the error
                stored_i = i; // Capture i when the error occurs
                stored_j = j; // Capture j when the error occurs
                i++; // Assume i is the culprit by skipping i but leaving j intact (simulating char removal)
            }
            else
                i++, j--; // Otherwise, advance as normal
        }
        // If nothing was returned and there was an error, i was the culprit.
        // If there was no error, then s was a palindrome.
    }
    return error ? stored_i : -1;
}
