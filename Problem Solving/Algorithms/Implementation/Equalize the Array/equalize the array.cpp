/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/equality-in-a-array/problem
 * Original video explanation: https://www.youtube.com/watch?v=qsYT6pKBspY
 * Last verified on: March 26, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the equalizeArray function below.
int equalizeArray(vector<int>& arr) {
    map<int, int> m;
    for (int& i : arr)
        m[i]++;

    map<int, int>::iterator itr = m.begin();
    int minimum = arr.size() - 1;
    for (itr; itr != m.end(); ++itr) {
        int num = arr.size() - itr->second;
        minimum = (num < minimum) ? num : minimum;
    }

    return minimum;
}