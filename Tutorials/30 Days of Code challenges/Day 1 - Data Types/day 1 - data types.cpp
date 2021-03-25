/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-data-types/problem
 * Original video explanation: https://www.youtube.com/watch?v=BNiUnNvbnhM
 * Last verified on: 25 March, 2021
 */

 /* IMPORTANT:
  * This code is meant to be used as a solution on HackerRank (link above).
  * It is not meant to be executed as a standalone program.
  * Only the part you have to fill in (for this challenge) is pasted below.
  */

// Declare second integer, double, and String variables.
int integer_x;
double double_x;
string string_x;
// Read and save an integer, double, and String to your variables.
cin >> integer_x >> double_x;
cin.ignore();
getline(cin, string_x);
// Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

// Print the sum of both integer variables on a new line.
cout << i + integer_x << endl;

// Print the sum of the double variables on a new line.
cout << fixed << setprecision(1) << d + double_x << endl;
// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.
cout << s << string_x << endl;