/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
 * Original video explanation: https://www.youtube.com/watch?v=BR04No9yzzs
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    unsigned int a, b;
    char const* num = "hi";
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            switch (i) {
            case 1:
                num = "one";
                break;
            case 2:
                num = "two";
                break;
            case 3:
                num = "three";
                break;
            case 4:
                num = "four";
                break;
            case 5:
                num = "five";
                break;
            case 6:
                num = "six";
                break;
            case 7:
                num = "seven";
                break;
            case 8:
                num = "eight";
                break;
            case 9:
                num = "nine";
                break;
            }
        }
        else if (i > 9) {
            if (i % 2 == 0) {
                num = "even";
            }
            else {
                num = "odd";
            }
        }
        cout << num << endl;
    }
    return 0;
}

