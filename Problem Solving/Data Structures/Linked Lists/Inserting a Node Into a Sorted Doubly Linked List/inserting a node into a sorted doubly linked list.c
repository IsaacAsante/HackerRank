/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem
 * Original video explanation: https://www.youtube.com/watch?v=DGez4qfCGMA
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the sortedInsert function below.
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    if (!head) return head;
    DoublyLinkedListNode* node = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    node->data = data;
    if (head->data >= node->data) {
        head->prev = node;
        node->next = head;
        return node;
    }
    DoublyLinkedListNode* temp = head;
    while (temp != NULL) {
        if (temp->data >= node->data) {
            temp->prev->next = node;
            node->prev = temp->prev;
            temp->prev = node;
            node->next = temp;
            break;
        }
        else if (temp->next == NULL) {
            temp->next = node;
            node->prev = temp;
            break;
        }
        temp = temp->next;
    }

    return head;
}
