/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem
 * Original video explanation:  https://www.youtube.com/watch?v=DEgIrr5_CdM
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution, including their pre-defined code.
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // My full solution below
    // Input for the test cases
    int testCases;
    cin >> testCases;
    // Loop for each test case
    for(int i = 0; i < testCases; i++) {
        // Input for the number to verify
        int numToTest;
        cin >> numToTest;
        // Fixed cases - 1 and 2
        if (numToTest == 1) cout << "Not prime" << endl;
        else if (numToTest == 2) cout << "Prime" << endl;
        else {
            // For all other numbers, check until square root
            for(int j = 2; j <= sqrt(numToTest); j++) {
                // If the num is divisible by 2 or more, stop
                if (numToTest % j == 0) {
                    cout << "Not prime" << endl;
                    break;
                }
            /* If every number until the square has been tested
             * then consider the number as Prime.
             */ 
                if (j + 1 > sqrt(numToTest)) cout << "Prime" << endl;
            }
        }
    }
    return 0;
}
