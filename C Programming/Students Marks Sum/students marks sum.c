/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/students-marks-sum/problem
 * Original video explanation: https://www.youtube.com/watch?v=7JeP3yPFAc4
 * Last verified on: April 22, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

//Complete the following function.
int marks_summation(int* marks, int number_of_students, char gender) {
    //Write your code here.
    int boys = 0, girls = 0;
    for (int i = 0; i < number_of_students; i++) {
        if (i % 2) girls += marks[i];
        else boys += marks[i];
    }
    return (gender == 'b') ? boys : girls;
}