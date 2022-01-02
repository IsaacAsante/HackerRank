/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-nested-logic/problem
 * Original video explanation: https://www.youtube.com/watch?v=328Qxwtp5lk
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution, including their pre-defined code.
 */

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    
    // Create variables
    short int r_day, r_month, r_year, due_day, due_month, due_year;
    short int fine = 0;
    string line1, line2;
    
    // Get input for the first line and store the returned date values
    getline(cin, line1);
    istringstream input1(line1);
    input1 >> r_day >> r_month >> r_year;
    
    // Get input for the second line and store the due date values
    getline(cin, line2);
    istringstream input2(line2);
    input2 >> due_day >> due_month >> due_year;

    // Perform comparisons with conditional statements
    // Still same year
    if (r_year == due_year) {
        if (r_month == due_month) {
            // If only the day is late, issue a fine. Else, 0.
            fine = (r_day - due_day > 0) ? 15 * (r_day - due_day) : 0;
        } else {
            // If the month is late, issue a fine. Else, 0.
            fine = (r_month - due_month > 0) ? 500 * (r_month - due_month) : 0;
        }
    }
    // If the year is late, issue a fine. Else, 0.
    else {
        fine = (r_year - due_year > 0) ? 10000 : 0;
    }

    cout << fine << endl;
    
    return 0;
}
