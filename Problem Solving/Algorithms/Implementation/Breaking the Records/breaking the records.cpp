/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
 * Original video explanation: https://www.youtube.com/watch?v=yOgfkDYk4hQ
 * Last verified on: March 10, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int>& scores) {
    int min = scores[0], max = scores[0], most = 0, least = 0;
    for (int i = 1; i < scores.size(); ++i) {
        if (scores[i] > max) {
            max = scores[i];
            most++;
        }
        else if (scores[i] < min) {
            min = scores[i];
            least++;
        }
    }
    return vector<int>({ most, least });
}