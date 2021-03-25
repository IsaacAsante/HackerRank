// TODO: Record the video for the "Circular Array Rotation" challenge in C++.

/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/circular-array-rotation/problem
 * Original video explanation: Pending
 * Last verified on: March 25, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the circularArrayRotation function below.
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> v;
    k = k % a.size();
    for (int i = 0; i < queries.size(); i++) {
        int original = (queries[i] - k < 0) ? a.size() + (queries[i] - k) : (abs(queries[i] - k)) % a.size();
        v.emplace_back(a[original]);
    }
    return v;
}