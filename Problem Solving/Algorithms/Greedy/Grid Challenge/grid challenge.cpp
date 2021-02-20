/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/grid-challenge/problem
 * Original video explanation: https://www.youtube.com/watch?v=0FaTudzF8Q8
 * Last verified on: 20 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the gridChallenge function below.
string gridChallenge(vector<string> grid) {
    // Sort every string's character
    int rows = grid.size();
    for (int i = 0; i < rows; i++) {
        sort(grid[i].begin(), grid[i].end());
    }

    // Now that every string's characters are sorted
    // Check the number of columns. 
    // It should be equal to the number of characters in the first string.
    int columns = grid[0].size();
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < columns; j++) {
            if (grid[i][j] > grid[i + 1][j])
                return "NO";
        }
    }
    return "YES";
}