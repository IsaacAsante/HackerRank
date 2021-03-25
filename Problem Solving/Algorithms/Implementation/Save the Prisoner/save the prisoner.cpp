/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/save-the-prisoner/problem
 * Original video explanation: https://www.youtube.com/watch?v=FBEF2WYalJs
 * Last verified on: March 25, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the saveThePrisoner function below.
int saveThePrisoner(int n, int m, int s) {
    return ((s + m - 1) % n) > 0 ? ((s + m - 1) % n) : n;
}