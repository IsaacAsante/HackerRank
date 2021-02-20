/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/mark-and-toys/problem
 * Original video explanation: https://www.youtube.com/watch?v=_9cP4a0kYvU
 * Last verified on: 20 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the maximumToys function below.
int maximumToys(vector<int>& prices, int k) {
    sort(prices.begin(), prices.end());
    int spent = 0, num = 0;

    for (int& price : prices) {
        if (spent + price <= k) {
            spent += price;
            num++;
        }
        else {
            break;
        }
    }
    return num;
}