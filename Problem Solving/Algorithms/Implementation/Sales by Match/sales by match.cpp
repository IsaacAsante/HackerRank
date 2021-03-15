/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/sock-merchant/problem
 * Original video explanation: https://www.youtube.com/watch?v=je69zINOZEU
 * Last verified on: March 16, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int>& ar) {
    map<int, int> counter;
    int pairs = 0;
    for (int& n : ar) {
        counter[n]++;
        if (!(counter[n] % 2)) pairs++;
    }
    return pairs;
}