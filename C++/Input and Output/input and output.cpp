/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/cpp-input-and-output/problem
 * Original video explanation: https://www.youtube.com/watch?v=5Ztg1kWqWmo
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed.
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string input;
    getline(cin, input);

    int sum = 0;
    int num;

    istringstream iss(input);
    while (iss >> num) {
        sum += num;
    }

    cout << sum;
    return 0;
}
