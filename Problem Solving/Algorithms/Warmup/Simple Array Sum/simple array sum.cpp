
/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/simple-array-sum/problem
 * Original video explanation: https://www.youtube.com/watch?v=pyyAYJNSGm8
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for (int& i : ar) sum += i;
    return sum;
}