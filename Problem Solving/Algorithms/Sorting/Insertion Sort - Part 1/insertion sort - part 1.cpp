/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/insertionsort1/problem
 * Original video explanation: https://www.youtube.com/watch?v=L7E3KnKwDco
 * Last verified on: 14 February, 2021
 */

 /* IMPORTANT:
  * This code is meant to be used as a solution on HackerRank (link above).
  * It is not meant to be executed as a standalone program.
  */

// Complete the insertionSort1 function below.
void insertionSort1(int n, vector<int> arr) {
    int num, j;
    // Loop through the array
    for (int i = 1; i < n; i++) {
        num = arr[i], j = i - 1;
        // Perform shifting of elements
        while (j >= 0 && arr[j] > num) {
            arr[j + 1] = arr[j];
            --j;
            // Print the array at every step
            for (int k = 0; k < n; k++)
                cout << arr[k] << " ";
            cout << "\n";
        }
        arr[j + 1] = num;
    }
    // Print the final sorted array
    for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
}
