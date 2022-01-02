/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-generics/problem
 * Original video explanation: https://www.youtube.com/watch?v=5Eq20gKeGMQ
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * Note that this solution only includes the printArray() function definition.
 */

// Write your code here
template <typename T>
void printArray(vector<T> v) {
    // You can use T or auto
    for (const auto& item : v) {
        cout << item << endl;
    }
}
