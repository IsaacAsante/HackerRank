/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
 * Original video explanation: https://www.youtube.com/watch?v=DqkFye1-nOY
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <iostream>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    string input;
    map<string, string> m;
    cin >> num;
    cin.ignore(); // Don't forget this
    for (int i = 0; i < num; i++) {
        getline(cin, input);
        size_t space = input.find(" ");
        string s1 = input.substr(0, space);
        string s2 = input.substr(space + 1); // Until the end
        m.insert(pair<string, string>(s1, s2));
    }

    // Queries
    string name;
    map<string, string>::iterator itr;
    while (getline(cin, name)) {
        // Keep reading until there are no more lines.
        itr = m.find(name);
        if (itr != m.end())
            cout << itr->first << "=" << itr->second << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}
