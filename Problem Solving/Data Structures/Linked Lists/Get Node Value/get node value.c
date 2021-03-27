/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem
 * Original video explanation: https://www.youtube.com/watch?v=WTu_za4VPCY
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the getNode function below.
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    if (head == NULL) return -1;

    int counter = 0, forward = 0;
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* node = head;

    while (temp->next != NULL) {
        forward++;
        temp = temp->next;
        if (forward - counter > positionFromTail) {
            node = node->next;
            counter++;
        }
    }

    return node->data;
}