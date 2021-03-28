// TODO: Record the video for the "Reverse a Doubly Linked List" challenge in C++.

/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem
 * Original video explanation: Pending
 * Last verified on: March 28, 2021
 */

 /* IMPORTANT:
  * This code is meant to be used as a solution on HackerRank (link above).
  * It is not meant to be executed as a standalone program.
  */

  // Complete the reverse function below.
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    // If the list has 0 or 1 node.
    if (!head || !head->next) return head;
    // Handle the head
    DoublyLinkedListNode* current = head->next;
    head->next = head->prev;
    head->prev = current;
    // Reverse the nodes
    while (current->next) {
        DoublyLinkedListNode* temp_next = current->next;
        current->next = current->prev;
        current->prev = temp_next;
        current = temp_next;
    }
    // Handle the tail
    current->next = current->prev;
    current->prev = NULL;
    return current;
}