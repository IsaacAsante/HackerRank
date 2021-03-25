/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/insertionsort2/problem
 * Original video explanation: https://www.youtube.com/watch?v=V8Y_YPkN8Ik
 * Last verified on: 14 February, 2021
 */

 /* IMPORTANT:
  * This code is meant to be used as a solution on HackerRank (link above).
  * It is not meant to be executed as a standalone program.
  */

// Complete the insertionSort2 function below.
void insertionSort2(int n, vector<int> arr) {
    int num, j;
    // Loop through the array
    for (int i = 1; i < n; i++) {
        num = arr[i], j = i - 1;
        // Perform shifting of elements
        while (j >= 0 && arr[j] > num) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = num;
        // Print the array at every step
        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << "\n";
    }
}
