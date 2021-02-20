/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem
 * Original video explanation: https://www.youtube.com/watch?v=agHsLl91yio
 * Last verified on: 20 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int diff = abs(arr[0] - arr[1]);

    for (int i = arr.size() - 1; i >= 0; --i) {
        if (abs(arr[i] - arr[i - 1]) < diff)
            diff = abs(arr[i] - arr[i - 1]);
    }

    return diff;
}
