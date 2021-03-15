/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
 * Original video explanation: https://www.youtube.com/watch?v=vpG6NT3FDnI
 * Last verified on: March 16, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the catAndMouse function below.
string catAndMouse(int& x, int& y, int& z) {
    if (abs(z - x) < abs(z - y)) return "Cat A";
    else if (abs(z - x) > abs(z - y)) return "Cat B";
    return "Mouse C";
}