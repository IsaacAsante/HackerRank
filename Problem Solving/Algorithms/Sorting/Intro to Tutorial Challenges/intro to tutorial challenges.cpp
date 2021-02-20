/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/tutorial-intro/problem
 * Original video explanation: https://www.youtube.com/watch?v=REi5cqdGH4U
 * Last verified on: 18 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the introTutorial function below.
int introTutorial(int V, vector<int> arr) {
    int start = 0, end = arr.size() - 1, middle;
    while (start <= end) {
        middle = start + (end - start) / 2; // Set middle point

        if (arr[middle] == V) {
            return middle; // Found at the middle
        }
        if (arr[middle] < V) {
            start = middle + 1; // Reposition the start
        }
        else {
            end = middle - 1; // Reposition the end
        }
    }
    return -1;
}