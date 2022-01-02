/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-scope/problem
 * Original video explanation: https://www.youtube.com/watch?v=6B_Jpz96OQE
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Add your code here
Difference(vector<int>& v) {
    // Copy all elements
    for (int i = 0; i < v.size(); i++)
        elements.push_back(v[i]);
}

void computeDifference() {
    int minimum = elements[0], maximum = elements[0];
    // Find the min and max element
    for (int& num : elements) {
        minimum = min(num, minimum);
        maximum = max(num, maximum);
    }
    // Store their difference
    maximumDifference = maximum - minimum;
}