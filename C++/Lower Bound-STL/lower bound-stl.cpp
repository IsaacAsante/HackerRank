/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/cpp-lower-bound/problem
 * Original video explanation: https://www.youtube.com/watch?v=0tO3fffFo1U
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long n, temp, q, query;
    cin >> n;
    vector<long> v;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        v.push_back(temp);
    }

    cin >> q;

    for (int i = 0; i < q; ++i) {
        cin >> query;
        vector<long>::iterator itr = lower_bound(v.begin(), v.end(), query);
        if (query != *itr) {
            cout << "No " << (itr - v.begin() + 1) << endl;
        }
        else {
            cout << "Yes " << (itr - v.begin() + 1) << endl;
        }
    }

    return 0;
}
