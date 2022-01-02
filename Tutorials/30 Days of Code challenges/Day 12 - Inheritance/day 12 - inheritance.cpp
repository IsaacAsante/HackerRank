/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-inheritance/problem
 * Original video explanation: https://www.youtube.com/watch?v=-AOOo3xjWoc
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * It only includes the definition for the derived Student class.
 */

class Student : public Person {
private:
    vector<int> testScores;
public:
    // Write your constructor here
    // Notice I'm using base member initialization!
    Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id) {
        for (int i = 0; i < scores.size(); i++)
            testScores.push_back(scores[i]);
    }

    // Write your function here
    char calculate() const {
        int grade = 0;
        for (int i = 0; i < testScores.size(); i++)
            grade += testScores[i];
        grade /= testScores.size(); // The average grade

        if (grade >= 90 && grade <= 100) return 'O';
        else if (grade >= 80 && grade < 90) return 'E';
        else if (grade >= 70 && grade < 80) return 'A';
        else if (grade >= 55 && grade < 70) return 'P';
        else if (grade >= 40 && grade < 55) return 'D';
        else return 'T';
    }
};