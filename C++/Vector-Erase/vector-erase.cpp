/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/vector-erase/problem
 * Original video explanation: https://www.youtube.com/watch?v=mJu7EktYWnY
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Set up the vector
    string n, numbers, num_range;
    getline(cin, n);
    getline(cin, numbers);
    istringstream ss(numbers);
    int num;
    vector<int> v(stoi(n));

    for (int i = 0; ss >> num; i++)
        v[i] = num;

    // Erase single element
    string x;
    getline(cin, x);
    v.erase(v.begin() + stoi(x) - 1);

    // Erase a range of numbers
    getline(cin, num_range);
    istringstream ss_range(num_range);
    int range_start, range_end;
    ss_range >> range_start >> range_end;

    v.erase(v.begin() + range_start - 1, v.begin() + range_end - 1);
    int v_size = v.size();

    cout << v_size << endl;

    for (int i = 0; i < v_size; i++)
        cout << v.at(i) << " ";

    return 0;
}
