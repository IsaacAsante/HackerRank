/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/lonely-integer/problem
 * Original video explanation: https://www.youtube.com/watch?v=la980b2X268
 * Last verified on: 20 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the lonelyinteger function below.
int lonelyinteger(vector<int>& a) {
    sort(a.begin(), a.end());
    int i = 0;
    while ((i <= a.size() - 1) && !(a[i] ^ a[i + 1])) {
        i += 2;
    }
    cout << a[i] << endl;
    return a[i];
}