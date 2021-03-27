/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem
 * Original video explanation: https://www.youtube.com/watch?v=2CbJg6xhmWU
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the reversePrint function below.
void reversePrint(SinglyLinkedListNode* head) {
    if (!head) return;
    reversePrint(head->next);
    cout << head->data << endl;
}