/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/minimum-distances/problem
 * Original video explanation: https://www.youtube.com/watch?v=TgcJHlu64zo
 * Last verified on: March 26, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the minimumDistances function below.
int minimumDistances(vector<int> a) {
    map<int, pair<int, int>> m;
    int minimum = INT_MAX;
    for (unsigned long i = 0; i < a.size(); i++) {
        if (m.find(a[i]) == m.end()) {
            m.insert({ a[i], {i, INT_MAX} });
        }
        else {
            int first = get<0>(m[a[i]]);
            int second = get<1>(m[a[i]]);
            if (second == INT_MAX) {
                second = i;
                if (i - first < minimum)
                    minimum = i - first;
            }
            else {
                int new_diff = i - second;
                if (second - first > new_diff) {
                    first = second;
                    second = i;
                    if (new_diff < minimum)
                        minimum = new_diff;
                }
            }
        }
    }

    if (minimum == INT_MAX) return -1;
    else return minimum;
}
