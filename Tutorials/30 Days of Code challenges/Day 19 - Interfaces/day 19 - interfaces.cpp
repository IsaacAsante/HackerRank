/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-interfaces/problem
 * Original video explanation: https://www.youtube.com/watch?v=zPr-PWe0P8w
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * Note that this solution only includes the derived Calculator class definition.
 */

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) override {
        int sum = 0;
        for(int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                sum += i;
                if (i != sqrt(n)) {
                    sum += n / i;
                }
            }
        }
        return sum;
    }
};