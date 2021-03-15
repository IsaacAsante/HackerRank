/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
 * Original video explanation: https://www.youtube.com/watch?v=oHIwfH4-vdU
 * Last verified on: March 16, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int>& h, string& word) {
    int max = 0;
    for (char& c : word) {
        int current_char_height = h[c - 97];
        max = (max < current_char_height) ? current_char_height : max;
    }
    return max * word.size();
}