/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-binary-numbers/problem
 * Original video explanation: https://www.youtube.com/watch?v=db8yzMuWwLU
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Solution code
    int consecutive = 0, max_num = 0;
    for (int i = 0; i < 32; i++) {
        // Shift n by i positions, then AND the bit with 1
        if ((n >> i) & 1U) {
            consecutive++;
            max_num = max(consecutive, max_num);
        }
        else consecutive = 0;

    }
    cout << max_num << endl;

    return 0;
}
