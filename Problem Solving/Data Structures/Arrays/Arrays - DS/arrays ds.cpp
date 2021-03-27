/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/arrays-ds/problem
 * Original video explanation: https://www.youtube.com/watch?v=PsjZDnd2Fus
 * Last verified on: March 27, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the reverseArray function below.
vector<int>& reverseArray(vector<int>& a) {
    int middle = a.size() / 2;
    for (int i = 0; i < middle; i++)
        swap(a[i], a[a.size() - i - 1]);

    return a;
}