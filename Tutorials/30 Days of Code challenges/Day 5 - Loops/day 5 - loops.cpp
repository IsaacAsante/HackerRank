/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-loops/problem
 * Original video explanation: https://www.youtube.com/watch?v=nMypwJc4N4s
 * Last verified on: 03 December, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Solution starts here
    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;

    return 0;
}