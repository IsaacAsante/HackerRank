/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/counting-valleys/problem
 * Original video explanation: https://www.youtube.com/watch?v=xhCcSrsCYXo
 * Last verified on: March 16, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the countingValleys function below.
int countingValleys(int& n, string& s) {
    int tracker = 0, valley = 0;
    for (char& step : s) {
        if (step == 'D') tracker--;
        else if (step == 'U') tracker++;
        if (tracker == -1 && step == 'D') valley++;
    }
    return valley;
}