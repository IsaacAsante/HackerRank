/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/operator-overloading/problem
 * Original video explanation: https://www.youtube.com/watch?v=rN76gYo3kKc
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

class Matrix {
public:
    vector<vector<int>> a;
    Matrix() {}

    Matrix operator+(Matrix& other) {
        for (int i = a.size() - 1; i >= 0; --i) {
            for (int j = a[0].size() - 1; j >= 0; --j) {
                a[i][j] += other.a[i][j];
            }
        }
        return *this;
    }
};
