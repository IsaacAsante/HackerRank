/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/tree-postorder-traversal/problem
 * Original video explanation: https://www.youtube.com/watch?v=xc7GwuF8pIA
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

void postOrder(struct node* root) {
    if (!root) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}