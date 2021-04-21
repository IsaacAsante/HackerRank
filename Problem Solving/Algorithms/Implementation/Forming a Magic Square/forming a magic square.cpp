/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/magic-square-forming/problem
 * Original video explanation: N/A
 * Last verified on: April 21, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * The constant SQUARES is not part of the initially provided code. It's part of my custom solution.
 */

#include <bits/stdc++.h>

using namespace std;

// Add this constant. These are all the 8 possible 3x3 magic squares.
const int SQUARES[8][3][3] = {
    {{8,1,6}, {3,5,7}, {4,9,2}},
    {{6,1,8}, {7,5,3}, {2,9,4}},
    {{4,9,2}, {3,5,7}, {8,1,6}},
    {{2,9,4}, {7,5,3}, {6,1,8}},
    {{8,3,4}, {1,5,9}, {6,7,2}},
    {{4,3,8}, {9,5,1}, {2,7,6}},
    {{6,7,2}, {1,5,9}, {8,3,4}},
    {{2,7,6}, {9,5,1}, {4,3,8}}
};

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>>& s) {
    int global_cost = INT_MAX, local_cost = 0;
    // Compare every square from the possibilities
    for (int i = 0; i < 8; i++) {
        // For each 3x3 matrix - go row by row
        local_cost = 0; // Reset for each matrix
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                // Get the cost for the matrix
                local_cost += abs(s[j][k] - SQUARES[i][j][k]); // Absolute difference
            }
        }
        global_cost = min(local_cost, global_cost);
    }
    return global_cost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
