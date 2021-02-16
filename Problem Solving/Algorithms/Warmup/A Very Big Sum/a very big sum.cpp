/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/a-very-big-sum/problem
 * Original video explanation: https://www.youtube.com/watch?v=YRIJ6hnvHMA
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long>& ar) {
    // 1. Create a sum variable
    long sum = 0;
    // 2. Loop through the array
    for (long& num : ar)
        sum += num;
    // 3. Return the sum
    return sum;
}