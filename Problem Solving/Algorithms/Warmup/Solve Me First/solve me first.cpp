/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/solve-me-first/problem
 * Original video explanation: https://www.youtube.com/watch?v=y_klHpkyImc
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This is the full code. 
 * It includes the needed header (iostream), the solveMeFirst and main functions.
 */

#include <iostream>
using namespace std;

int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
