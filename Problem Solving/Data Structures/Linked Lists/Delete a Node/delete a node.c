/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
 * Original video explanation: https://www.youtube.com/watch?v=7UnHIpypJFI
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the deleteNode function below.
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    // If we need to delete the head
    if (position == 0) {
        SinglyLinkedListNode* next = head->next;
        free(head);
        return next;
    }

    // For any other node to delete
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* prev;
    int pos = 0;
    while (temp != NULL) {
        if (pos == position) break;
        prev = temp;
        temp = temp->next;
        pos++;
    }

    prev->next = temp->next;

    free(temp);
    return head;
}