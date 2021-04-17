/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
 * Original video explanation: https://www.youtube.com/watch?v=D-qwtgg6CJs
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    vector<int> v;
    stringstream ss(str);

    int n;
    char skip;

    while (ss) {
        if (ss >> n) v.push_back(n);
        ss >> skip;
    }

    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}