/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-linked-list/problem
 * Original video explanation: https://www.youtube.com/watch?v=NA9TcRiaOoE
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

Node* insert(Node* head, int data)
{
    //Complete this method
    Node* node = new Node(data);
    if (!head) return node; // New node becomes the head
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = node; // Insert after the last node

    return head;
}