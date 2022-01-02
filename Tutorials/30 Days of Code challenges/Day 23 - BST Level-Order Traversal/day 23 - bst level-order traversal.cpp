/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-binary-trees/problem
 * Original video explanation: https://www.youtube.com/watch?v=MqKDrGyHgTs
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

void levelOrder(Node* root) {
    //Write your code here
    queue<Node*> q;
    if (root) q.push(root);

    while (!q.empty()) {
        // While there are nodes in queue, print the front
        Node* temp = q.front();
        cout << temp->data << " ";
        // Then remove it
        q.pop();
        // Add the nodes' left/right child nodes, if any
        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
}