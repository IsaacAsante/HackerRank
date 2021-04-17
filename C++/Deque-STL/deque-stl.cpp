// TODO: Record the video for the "Deque-STL" challenge in C++.

/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/deque-stl/problem
 * Original video explanation: Pending
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 * Comments were inserted in the pre-defined code of this challenge for added clarity.
 */

#include <iostream>
#include <deque> 
#include <algorithm>
#include <vector>
using namespace std;

void printKMax(int arr[], int n, int k) {
    // k = subarray size
    // n = array size
    // arr = array to process

    deque<int> deq;
    int i = 0;

    for (i = 0; i < k; i++) {
        // Add and replace elements in the queue for the first block
        while ((!deq.empty()) && arr[i] >= arr[deq.back()])
            deq.pop_back(); // Remove smaller elements

        // Add new element at rear of queue 
        deq.push_back(i);
    }

    // Remaining blocks
    for (; i < n; ++i) {
        // Print the front item of the queue which is the previous window's top item.
        cout << arr[deq.front()] << " ";
        while ((!deq.empty()) && deq.front() <= i - k)
            deq.pop_front();

        // We're still processing the rest of the elements in the array, so remove the smaller ones from the queue.
        while ((!deq.empty() && arr[i] >= arr[deq.back()]))
            deq.pop_back();

        deq.push_back(i);
    }
    cout << arr[deq.front()] << endl;
}

int main() {

    int t; // Number of test cases
    cin >> t;
    while (t > 0) {
        int n, k; // Size of array (n) and subarray (k)
        cin >> n >> k;
        int i;
        int arr[n]; // Create the array of size n
        for (i = 0; i < n; i++)
            cin >> arr[i]; // Populate the array
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
