/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/angry-professor/problem
 * Original video explanation: https://www.youtube.com/watch?v=R5DrLDAaxQg
 * Last verified on: March 25, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the angryProfessor function below.
string angryProfessor(int k, vector<int> a) {
    sort(a.begin(), a.end());
    int ontime = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= 0) ontime++;
        else break;
    }
    if (ontime >= k) return "NO";
    else return "YES";
}