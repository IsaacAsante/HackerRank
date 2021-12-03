/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-review-loop/problem
 * Original video explanation: https://www.youtube.com/watch?v=n2uIWdaveAw
 * Last verified on: 03 December, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    string s;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> s;
        int even_idx = 0, odd_idx = 1;
        while (even_idx < s.size()) {
            cout << s[even_idx];
            even_idx += 2;
        }
        cout << " "; // Space between even and odd characters
        while (odd_idx < s.size()) {
            cout << s[odd_idx];
            odd_idx += 2;
        }
        cout << endl;
    }
    return 0;
}