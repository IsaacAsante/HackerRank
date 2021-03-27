/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem
 * Original video explanation: https://www.youtube.com/watch?v=GWbrcEkS1XI
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

struct node* insert(struct node* root, int data) {
    if (!root) {
        struct node* new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = data;
        new_node->left = new_node->right = NULL;
        return new_node;
    }

    if (root->data > data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}