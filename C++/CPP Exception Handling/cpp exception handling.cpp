/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/cpp-exception-handling/problem
 * Original video explanation: https://www.youtube.com/watch?v=pv02knhh5no
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

void process_input(int& n) {
    try {
        int d = largest_proper_divisor(n);
        cout << "result=" << d << endl;
    }
    catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    cout << "returning control flow to caller" << endl;
}
