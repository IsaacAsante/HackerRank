/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem
 * Original video explanation: https://www.youtube.com/watch?v=9bl63TSJRlw
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    // My solution code below
    int n;
    try {
        n = stoi(S); // Try to convert
    }
    catch (const invalid_argument& e) {
        cout << "Bad String" << endl; // Handle exception
        return -1; // Non-zero value indicates error
    }
    cout << n << endl; // Otherwise, print as integer

    return 0;
}
