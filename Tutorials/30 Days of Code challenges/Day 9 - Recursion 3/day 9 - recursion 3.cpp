/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-recursion/problem
 * Original video explanation: https://www.youtube.com/watch?v=PJDdsy-qBDQ
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    if (n == 2) return n;
    return n * factorial(n - 1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

