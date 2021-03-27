/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem
 * Original video explanation: https://www.youtube.com/watch?v=PUMCc5GPn1Q
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the findMergeNode function below.
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* first = head1;
    SinglyLinkedListNode* second = head2;

    while (first != second) {
        first = first->next;
        second = second->next;
        // Restart when necessary
        if (!first) first = head1;
        if (!second) second = head2;
    }

    return first->data; // first and second are the same
}