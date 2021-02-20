/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/maximum-perimeter-triangle/problem
 * Original video explanation: https://www.youtube.com/watch?v=NafaEFwk9eQ
 * Last verified on: 20 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the maximumPerimeterTriangle function below.
vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    // Sort sticks in ascending order
    sort(sticks.begin(), sticks.end());

    vector<vector<int>> valid_triangles;

    // Get triangles that are non-degenerate
    int size = sticks.size();
    for (int i = 0; i < size - 2; i++) {
        vector<int> triangle(3, 0);
        bool invalid = (sticks[i] + sticks[i + 1]) <= sticks[i + 2];
        if (!invalid) {
            triangle[0] = sticks[i];
            triangle[1] = sticks[i + 1];
            triangle[2] = sticks[i + 2];
            valid_triangles.push_back(triangle);
        }
    }

    if (valid_triangles.empty()) {
        // Return an empty vector of int
        vector<int> triangle(1, -1);
        valid_triangles.push_back(triangle);
    }
    else
    {
        /* Choose the triangle with the longest maximum side
         * The integers were sorted in the previous steps
         * So the last number in every triangle vector is the largest
         * Assume that the first triangle meets the requirement
         */
        int max_side = valid_triangles[0][2];

        // Compare with other valid triangles
        int valid_triangles_size = valid_triangles.size();
        for (vector<vector<int>>::iterator itr = valid_triangles.begin() + 1; itr != valid_triangles.end(); ++itr) {
            // Remove triangles with a longest side that is smaller than what we have
            if (max_side > (*itr)[2]) {
                valid_triangles.erase(itr);
            }
            else
            {
                max_side = (*itr)[2];
                valid_triangles.erase(--itr);
            }
        }
    }
    return valid_triangles[0];
}
