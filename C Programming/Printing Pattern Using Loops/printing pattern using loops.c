// TODO: Record the video for the "Printing Pattern Using Loops" challenge in C.

/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/printing-pattern-2/problem
 * Original video explanation: Pending
 * Last verified on: April 24, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * I have added extra comments for clarification.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    // Solution starts here
    int num = n * 2 - 1;
    // First Loop - First n rpws
    for (int i = 0; i < n; i++) {
        int val = n;
        int counter = (n - i) * 2;
        int increase = n - i;

        /*
         * The first while loop prints the decreasing digits
         * From the range [n, 1) from the left to the center
         * From the second row onwards
         */
        while (val > n - i && val > 0)
            printf("%d ", val--);

        /*
         * The second while loop prints the repeating digits
         * from the first row onwards
         * It controls how many times the digits must repeating after decreasing
         * before they start increasing towards the right
         */
        while (counter > 1 && n - i > 0) {
            counter--;
            printf("%d ", n - i);
        }

        /*
         * The last while loop is responsible for increasing
         * the digits after the repetitions towards the right, 
         * based on the row, from 1 (minimum) to n (maximum)
         */
        while (increase < n)
            printf("%d ", ++increase);

        printf("\n");
    }

    // This is for the repeated values after the middle row
    int two = 0;

    // Run this loop n-1 times
    for (int i = 1; i < n; i++) {
        int val = 0, counter = 0;

        /*
         * This first while loop is for the increasing digits
         * from row n + 1, up to the last row
         * from the left towards the center
         */
        while (val + i < n) {
            printf("%d ", n - val);
            val++;
        }

        /*
         * This second while loop is for repeating digits
         */
        while (++counter < 3 + two) {
            printf("%d ", i + 1);
        }

        /*
         * The repeating numbers are repeated 3 times
         * then 5 times, then 7 times, etc.
         * They increase by 2 at every row after the middle row
         */
        two += 2;

        /*
         * Whatever i+1 is, continue increase that value
         * until the value of n is reached
         */
        int increase = i + 1;
        while (increase < n) {
            printf("%d ", ++increase);
        }

        // Print row after row
        printf("\n");
    }
    return 0;
}
