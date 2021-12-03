/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-conditional-statements/problem
 * Original video explanation: https://www.youtube.com/watch?v=Ra1iEEK5__0
 * Last verified on: 03 December, 2021
 */


/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Solution code below
    char const* s;
    if (N % 2) s = "Weird";
    else {
        if ((2 <= N && N <= 5) || N > 20) s = "Not Weird";
        if (6 <= N && N <= 20) s = "Weird";
    }
    cout << s << endl;
    return 0;
}
