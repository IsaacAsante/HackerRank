/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-linked-list-deletion/problem
 * Original video explanation: https://www.youtube.com/watch?v=bx-Zjo955Xs
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

Node* removeDuplicates(Node* head)
{
    if (head) {
        Node* temp = head;
        while (temp && temp->next) {
            if (temp->data == temp->next->data) {
                Node* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
            }
            else {
                temp = temp->next;
            }
        }
    }
    return head;
}