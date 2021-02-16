/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
 * Original video explanation: https://www.youtube.com/watch?v=u1vsaQXJVSA
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int>& ar) {
    sort(ar.begin(), ar.end());
    int count = 0;
    int index = ar.size() - 1;
    int tallest = ar[index];
    while (tallest == ar[index] && index >= 0) {
        count++;
        index--;
    }
    return count;
}