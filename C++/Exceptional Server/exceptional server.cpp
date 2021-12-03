/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/exceptional-server/problem
 * Original video explanation: https://www.youtube.com/watch?v=BmoHhfk0bMw
 * Last verified on: June 20, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

/* Enter your code here. */
try {
    int res = Server::compute(A, B);
    cout << res << endl;
}
catch (const std::bad_alloc& mem) {
    cout << "Not enough memory" << endl;
}
catch (const std::invalid_argument& arr) {
    cout << "Exception: " << arr.what() << endl;
}
catch (const std::exception& e) {
    cout << "Exception: " << e.what() << endl;
}
catch (const int& e) {
    cout << "Other Exception" << endl;
}