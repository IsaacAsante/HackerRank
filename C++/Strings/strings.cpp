/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-tutorial-strings/problem
 * Original video explanation: https://www.youtube.com/watch?v=R7_yz_KFuGM
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    // Swapping of first characters
    char temp = a[0];

    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;

    return 0;
}

