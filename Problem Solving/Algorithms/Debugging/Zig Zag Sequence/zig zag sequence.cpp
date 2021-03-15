/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/zig-zag-sequence/problem
 * Original video explanation: https://www.youtube.com/watch?v=tSNovGX96IY
 * Last verified on: March 5, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

void findZigZagSequence(vector < int > a, int n) {
    sort(a.begin(), a.end());
    int mid = (n + 1) / 2 - 1;
    swap(a[mid], a[n - 1]);

    int st = mid + 1;
    int ed = n - 2;
    while (st <= ed) {
        swap(a[st], a[ed]);
        st = st + 1;
        ed = ed - 1;
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}