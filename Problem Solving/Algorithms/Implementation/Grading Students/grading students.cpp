/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/grading/problem
 * Original video explanation: https://www.youtube.com/watch?v=m008oQi-Bu8
 * Last verified on: March 8, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

vector<int>& gradingStudents(vector<int>& grades) {
    for (int& grade : grades)
        if (grade >= 38) grade += ((grade % 5) >= 3) ? (5 - (grade % 5)) : 0;
    return grades;
}