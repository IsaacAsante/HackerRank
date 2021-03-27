/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem
 * Original video explanation: https://www.youtube.com/watch?v=b6XG6U_AOiE
 * Last verified on: March 27, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the printLinkedList function below.
void printLinkedList(SinglyLinkedListNode* head) {
    if (!head) return;

    SinglyLinkedListNode* temp = head;

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}