/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/cpp-sets/problem
 * Original video explanation: https://www.youtube.com/watch?v=oIiSnZZ4HVE
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int input;
    cin >> input;

    for (int i = 0; i <= input; i++) {
        string query_input;
        int query_type, query_number;
        getline(cin, query_input);

        if (query_input.size() > 1) {
            istringstream ss(query_input);
            ss >> query_type >> query_number;
        }

        switch (query_type) {
        case 1:
            s.insert(query_number);
            break;
        case 2:
            s.erase(query_number);
            break;
        case 3:
            set<int>::iterator it = s.find(query_number);
            if (it == s.end()) {
                cout << "No" << endl;
            }
            else {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}

