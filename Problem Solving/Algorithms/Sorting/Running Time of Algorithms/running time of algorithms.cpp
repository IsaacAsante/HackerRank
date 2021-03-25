/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/runningtime/problem
 * Original video explanation: https://www.youtube.com/watch?v=mi7J_97y1yk
 * Last verified on: 14 February, 2021
 */

 /* IMPORTANT:
  * This code is meant to be used as a solution on HackerRank (link above).
  * It is not meant to be executed as a standalone program.
  */

// Complete the runningTime function below.
int runningTime(vector<int> arr) {
    int num, j, shift = 0;
    for (int i = 1; i < arr.size(); i++) {
        num = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > num) {
            arr[j + 1] = arr[j];
            ++shift; // Count the shifts
            --j;
        }
        arr[j + 1] = num;
    }
    return shift;
}
