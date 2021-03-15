/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/the-hurdle-race/problem
 * Original video explanation: https://www.youtube.com/watch?v=nWe_kqxYJYk
 * Last verified on: March 16, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the hurdleRace function below.
int hurdleRace(int k, vector<int> height) {
    sort(height.begin(), height.end());
    if (height[height.size() - 1] - k > 0)
        return height[height.size() - 1] - k;
    else
        return 0;
}