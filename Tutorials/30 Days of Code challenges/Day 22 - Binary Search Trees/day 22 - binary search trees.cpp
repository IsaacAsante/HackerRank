/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-binary-search-trees/problem
 * Original video explanation: https://www.youtube.com/watch?v=K__1omqwZfs
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * Note that this solution only includes the getHeight() function definition.
 */

int getHeight(Node* root) {
    //Write your code here
    if (!root) return -1;
    return max(getHeight(root->left), getHeight(root->right)) + 1;
}