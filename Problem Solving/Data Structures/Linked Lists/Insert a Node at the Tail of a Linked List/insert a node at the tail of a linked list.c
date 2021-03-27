/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
 * Original video explanation: https://www.youtube.com/watch?v=dY0FAuMnNmo
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */
 
// Complete the insertNodeAtTail function below.
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* node = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    node->data = data;
    node->next = NULL;

    if (head == NULL) return node;

    SinglyLinkedListNode* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = node;
    return head;
}