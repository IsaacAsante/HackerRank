/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/reverse-a-linked-list/problem
 * Original video explanation: https://www.youtube.com/watch?v=8oMklEW4WfU
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the reverse function below.
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    if (!head) return head;
    SinglyLinkedListNode* prev = head;
    SinglyLinkedListNode* current = head->next;
    head->next = nullptr;

    while (current) {
        SinglyLinkedListNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}