/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem
 * Original video explanation: https://www.youtube.com/watch?v=Gdz9Y9aWiqM
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the insertNodeAtHead function below.
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* node = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));

    node->data = data;

    if (llist == NULL) return node;

    node->next = llist;
    llist = node;

    return llist;
}