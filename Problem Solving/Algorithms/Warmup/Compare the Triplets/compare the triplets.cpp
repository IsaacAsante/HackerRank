/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/compare-the-triplets/problem
 * Original video explanation: https://www.youtube.com/watch?v=DwmairfeYTc
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int>& a, vector<int>& b) {
    int alice = 0, bob = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] > b[i]) alice++;
        else if (a[i] < b[i]) bob++;
    }
    return vector<int>({ alice, bob });
}