/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/correctness-invariant/problem
 * Original video explanation: https://www.youtube.com/watch?v=PJDdsy-qBDQ
 * Last verified on: 14 February, 2021
 */

 /* IMPORTANT:
  * This code is meant to be used as a solution on HackerRank (link above).
  * It is not meant to be executed as a standalone program.
  */

void insertionSort(int N, int arr[]) {
    int i, j;
    int value;
    for (i = 1; i < N; i++)
    {
        value = arr[i];
        j = i - 1;
        // Only the following line was modified ('>=' instead of the original '>')
        while (j >= 0 && value < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
    for (j = 0; j < N; j++)
    {
        printf("%d", arr[j]);
        printf(" ");
    }
}