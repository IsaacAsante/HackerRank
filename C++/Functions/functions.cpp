/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-tutorial-functions/problem
 * Original video explanation: https://www.youtube.com/watch?v=lkKSlGJ-2ek
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were added/modified.
 */

#include <iostream>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int array[] = { a, b, c, d };
    sort(array, array + 4);
    return array[3];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}