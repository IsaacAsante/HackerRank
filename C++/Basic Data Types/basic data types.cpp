/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
 * Original video explanation: https://www.youtube.com/watch?v=mRuW9oNZu-4
 * Last verified on: April 17, 2021
 */

 /* IMPORTANT:
  * This is the full code for the solution.
  * Some headers were removed/modified.
  */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;

    cout << i << '\n'
        << l << '\n'
        << c << '\n'
        << fixed << setprecision(3) << f << '\n'
        << fixed << setprecision(9) << d << endl;
    return 0;
}