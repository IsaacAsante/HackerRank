/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem
 * Original video explanation: https://www.youtube.com/watch?v=-4K4n7l9gMg
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the insertNodeAtPosition function below.
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* node = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    node->data = data;
    if (!head) return node;

    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* prev_node;
    int pos = 0;

    while (temp != NULL) {
        if (pos == position) break;
        prev_node = temp;
        temp = temp->next;
        pos++;
    }

    prev_node->next = node;
    node->next = temp;

    return head;
}