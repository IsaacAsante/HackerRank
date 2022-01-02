/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-more-exceptions/problem 
 * Original video explanation: https://www.youtube.com/watch?v=EZgNmxGO6Mo
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

//Write your code here
// Recommended to create your own custom exception
struct CustomException : public exception {
    const char* message; // Make this flexible
    CustomException(const char* m) : message(m) {};
    const char* what() const throw() {
        return message;
    }
};
struct Calculator {
    Calculator() {}
    const int power(const int& n, const int& p) {
        if (n < 0 || p < 0)
            throw CustomException("n and p should be non-negative"); // Specify the message here.
        else
            return pow(n, p);
    }
    ~Calculator() {}
};

