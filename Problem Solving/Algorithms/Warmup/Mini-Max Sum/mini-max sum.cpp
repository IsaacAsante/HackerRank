/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/mini-max-sum/problem
 * Original video explanation: https://www.youtube.com/watch?v=KMhGG8GZ0Gg
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */


// Complete the miniMaxSum function below.
void miniMaxSum(vector<int>& arr) {
    // Sort the vector
    sort(arr.begin(), arr.end());
    long size = arr.size(), minsum = 0, maxsum = 0;
    // Use a single loop to get the min and the max sums
    for (int i = 0; i < 4; i++) {
        minsum += arr[i];
        maxsum += arr[size - 1 - i];
    }
    cout << minsum << " " << maxsum << endl;

}