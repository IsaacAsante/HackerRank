/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/missing-numbers/problem
 * Original video explanation: https://www.youtube.com/watch?v=N6r9Dh68Y3o
 * Last verified on: 18 February, 2021
 */

 /* IMPORTANT:
  * This code is meant to be used as a solution on HackerRank (link above).
  * It is not meant to be executed as a standalone program.
  */

// Complete the missingNumbers function below.
vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    vector<int> missing;
    // To avoid having to sort the vector in the end, use map instead of unordered_map.
    map<int, pair<int, int>> frequency;
    size_t i = 0, j = 0;
    while (i < brr.size()) {
        frequency[brr[i]].first++;
        if (j < arr.size()) {
            frequency[arr[j]].second++;
            j++;
        }
        i++;
    }
    // The value pairs must the same integers in the map
    for (auto const& count : frequency)
        if (count.second.first != count.second.second) missing.push_back(count.first);
    // Vector update complete.
    return missing;
}
