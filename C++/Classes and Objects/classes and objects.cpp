/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/classes-objects/problem
 * Original video explanation: https://www.youtube.com/watch?v=Ruc_3fvVYGQ
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code only features the Student class, which you have to write. 
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Write your Student class here
class Student {
private:
    int scores_array[5];
public:
    /* Constructor */
    Student() {}

    void input() {
        int score;
        for (int i = 0; i < 5; i++) {
            cin >> score;
            scores_array[i] = score;
        }
    }

    int calculateTotalScore() {
        int sum = 0;
        int array_length = sizeof(scores_array) / sizeof(scores_array[0]);
        for (int i = 0; i < array_length; i++) {
            sum += scores_array[i];
        }
        return sum;
    }

    /* Destructor */
    ~Student() {}
};
