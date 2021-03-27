/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/maximum-element/problem
 * Original video explanation: https://www.youtube.com/watch?v=yJWWlkQ7Km8
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * You must copy the entire code below and paste in full to replace whatever may already be in HackerRank's text editor.
 */

#include <iostream>
// Don't forget to add these
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, query_type, query_value, maximum;
    string query_line;
    stack<int> s, max_tracker;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, query_line);
        istringstream ss(query_line);
        ss >> query_type >> query_value;
        switch (query_type) {
        case 1:
            s.push(query_value);
            if (max_tracker.empty() || max_tracker.top() <= query_value)
                max_tracker.push(query_value);
            break;
        case 2:
            if (s.top() == max_tracker.top())
                max_tracker.pop();
            s.pop();
            break;
        default:
            cout << max_tracker.top() << endl;
        }
    }
    return 0;
}
