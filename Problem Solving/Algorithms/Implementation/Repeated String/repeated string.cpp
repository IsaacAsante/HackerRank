// TODO: Record the video for the "Repeated String" challenge in C++.

/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/repeated-string/problem
 * Original video explanation: Pending
 * Last verified on: March 25, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int found = 0;
    long repetitions, occ;
    for (char& c : s)
        if (c == 'a') found++;

    if (found == 0) return 0;

    // Full occurences
    repetitions = (long)n / s.size();
    occ = repetitions * found;

    if (n % s.size() != 0) {
        // Partial occurences
        repetitions = n % s.size();
        for (int i = 0; i < repetitions; i++)
            if (s[i] == 'a') occ++;
    }
    return occ;
}