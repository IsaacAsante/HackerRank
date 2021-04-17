/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/vector-sort/problem
 * Original video explanation: https://www.youtube.com/watch?v=augknUhDI6Q
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string n, user_input;
    getline(cin, n);
    getline(cin, user_input);

    stringstream ss(user_input);
    vector<int> v(stoi(n));

    int v_size = v.size();

    int x;
    for (int i = 0; i < v_size; i++) {
        ss >> x;
        v[i] = x;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v_size; i++) {
        cout << v.at(i) << " ";
    }

    return 0;
}
