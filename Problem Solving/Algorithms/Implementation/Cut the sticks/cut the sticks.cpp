/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/cut-the-sticks/problem
 * Original video explanation: https://www.youtube.com/watch?v=RfM8E7UwRJw
 * Last verified on: March 25, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int shortest = INT_MIN;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > shortest) {
            ans.push_back(arr.size() - i);
            shortest = arr[i];
        }
    }
    return ans;
}