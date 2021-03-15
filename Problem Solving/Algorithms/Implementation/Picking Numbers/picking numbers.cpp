/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/picking-numbers/problem
 * Original video explanation: https://www.youtube.com/watch?v=GUi8L7MbEYY
 * Last verified on: March 16, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * NOTE: The issue from the following YouTube comment has not been looked into yet. [https://www.youtube.com/watch?v=GUi8L7MbEYY&lc=UgxOUo3_CaUyhAww6wZ4AaABAg]
 */

int pickingNumbers(vector<int> a) {
    sort(a.begin(), a.end());
    int len = 0, start = 0, num = 1;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] - a[start] >= 2) {
            num = 1;
            len = max(len, i - start);
            start = i;
        }
        else {
            num++;
        }
    }
    return max(len, num);
}