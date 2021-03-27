/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem
 * Original video explanation: https://www.youtube.com/watch?v=8ytd7HT8RnQ
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the has_cycle function below.
bool has_cycle(SinglyLinkedListNode* head) {
    if (head == nullptr) return false;
    SinglyLinkedListNode* tortoise = head;
    SinglyLinkedListNode* hare = head;

    while (hare != nullptr && hare->next != nullptr) {
        hare = hare->next->next;
        tortoise = tortoise->next;
        if (hare == tortoise) return true;
    }
    return false;
}