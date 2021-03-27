/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/tree-level-order-traversal/problem
 * Original video explanation: https://www.youtube.com/watch?v=5wOk5sOWKEE
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

void levelOrder(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}