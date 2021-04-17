/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
 * Original video explanation: https://www.youtube.com/watch?v=2W3AvQuvJg0
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if (n >= 1) {
        if (n == 1) {
            cout << "one";
        }
        else if (n == 2) {
            cout << "two";
        }
        else if (n == 3) {
            cout << "three";
        }
        else if (n == 4) {
            cout << "four";
        }
        else if (n == 5) {
            cout << "five";
        }
        else if (n == 6) {
            cout << "six";
        }
        else if (n == 7) {
            cout << "seven";
        }
        else if (n == 8) {
            cout << "eight";
        }
        else if (n == 9) {
            cout << "nine";
        }
        else {
            cout << "Greater than 9";
        }
    }
    return 0;
}
