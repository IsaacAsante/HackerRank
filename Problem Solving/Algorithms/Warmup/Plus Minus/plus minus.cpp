/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/plus-minus/problem
 * Original video explanation: https://www.youtube.com/watch?v=pBQjF5X3vu4
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    double pos, neg, zeros;
    pos = neg = zeros = 0;
    int size = arr.size();
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zeros++;
    }
    cout << setprecision(6) << fixed << pos / size << endl;
    cout << neg / size << endl;
    cout << zeros / size << endl;
}