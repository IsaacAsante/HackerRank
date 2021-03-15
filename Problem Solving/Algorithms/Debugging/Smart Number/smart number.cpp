/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/smart-number/problem
 * Original video explanation: https://www.youtube.com/watch?v=Y_I19gag-tw
 * Last verified on: March 5, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

bool is_smart_number(int num) {
    int val = (int)sqrt(num);
    if (val * val == num)
        return true;
    return false;
}