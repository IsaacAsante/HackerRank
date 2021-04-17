/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/inherited-code/problem
 * Original video explanation: https://www.youtube.com/watch?v=6y82H1kxzq8
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

/* Define the exception here */
class BadLengthException {
private:
    int num;
public:
    BadLengthException(const int& n) : num(n) {}

    // Getter
    const int& what() {
        return num;
    }
};