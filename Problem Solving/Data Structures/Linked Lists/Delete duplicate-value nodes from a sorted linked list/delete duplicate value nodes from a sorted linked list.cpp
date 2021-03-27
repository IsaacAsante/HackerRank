/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem
 * Original video explanation: https://www.youtube.com/watch?v=RoD_QZBSlNU
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the removeDuplicates function below.
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    if (!head) return head;

    SinglyLinkedListNode* current = head->next;
    SinglyLinkedListNode* previous = head;

    while (current != NULL) {
        if (current->data == previous->data) {
            SinglyLinkedListNode* temp = current;
            current = current->next;
            previous->next = current;
            free(temp);
        }
        else {
            previous = current;
            current = current->next;
        }
    }

    return head;
}