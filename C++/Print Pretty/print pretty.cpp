/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/prettyprint/problem
 * Original video explanation: https://www.youtube.com/watch?v=CoMGQ1BllFE
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */
 
 /* Enter your code here */
cout << showbase << hex << left << nouppercase << long(A) << endl;
cout << setw(15) << right << setfill('_') << showpos << fixed << setprecision(2) << B << endl;
cout << scientific << noshowpos << uppercase << setprecision(9) << C << endl;
