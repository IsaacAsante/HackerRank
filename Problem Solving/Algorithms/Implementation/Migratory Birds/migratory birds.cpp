/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/migratory-birds/problem
 * Original video explanation: https://www.youtube.com/watch?v=QlDKPKcFLng
 * Last verified on: March 10, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    map<int, int> birds;
    for (int& b : arr) {
        birds[b]++;
    }

    map<int, int>::iterator tracker = birds.begin();
    for (map<int, int>::iterator itr = tracker; itr != birds.end(); ++itr) {
        if (itr->second > tracker->second) tracker = itr;
        else if (itr->second == tracker->second) {
            tracker = (tracker->first < itr->first) ? tracker : itr;
        }
    }
    return tracker->first;
}
