/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/apple-and-orange/problem
 * Original video explanation: https://www.youtube.com/watch?v=XEDSpj1JOHo
 * Last verified on: March 8, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int& s, int& t, int& a, int& b, vector<int>& apples, vector<int>& oranges) {
    int apple_count = 0, orange_count = 0;
    for (int& apple_distance : apples)
        if (apple_distance + a >= s && apple_distance + a <= t) apple_count++;

    for (int& orange_distance : oranges)
        if (orange_distance + b <= t && orange_distance + b >= s) orange_count++;

    cout << apple_count << '\n' << orange_count << endl;
}