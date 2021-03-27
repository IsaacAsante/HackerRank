/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/compare-two-linked-lists/problem
 * Original video explanation: https://www.youtube.com/watch?v=KaFSWKo_Ses
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the compare_lists function below.
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* l1 = head1;
    SinglyLinkedListNode* l2 = head2;
    while (l1 || l2) {
        if (!l1 || !l2) return false; // Any null pointer?
        if (l1->data != l2->data) return false; // Different data?
        l1 = l1->next;
        l2 = l2->next;
    }
    return true;
}