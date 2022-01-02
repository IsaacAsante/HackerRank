// TODO: Record the video for "Day 29 - Bitwise AND" challenge in C++.

/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-bitwise-and/problem
 * Original video explanation: Pending
 * Last verified on: 03 January, 2022
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

int bitwiseAnd(int N, int K) {
    // Brute force technique
    int max_and = 0, and_result = 0;
    for (int A = 1; A < N; A++) {
        int B = A + 1;
        while (A < B && B <= N) {
            // Comment out the debug print statements to avoid timeouts.
            // cout << "A = " << A << ", B = " << B << "; ";
            and_result = A & B;
            // cout << "A & B = " << and_result << endl;
            if (and_result < K)
                max_and = max(max_and, and_result);
            B++;
        }
    }
    return max_and;
}