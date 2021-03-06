/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem
 * Original video explanation: https://www.youtube.com/watch?v=SaKmGN4C6Nk
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

int getHeight(struct node* root) {
    if (!root) return -1;
    return ((getHeight(root->left) > getHeight(root->right)) ? getHeight(root->left) : getHeight(root->right)) + 1;
}