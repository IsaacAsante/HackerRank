/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-operators/problem
 * Original video explanation: https://www.youtube.com/watch?v=lR8F0eqNFck
 * Last verified on: 03 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * Only the part you have to fill in (for this challenge) is pasted below.
 */

  // Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    int cost = round(meal_cost + ((tip_percent + tax_percent) * meal_cost / 100));
    cout << cost << endl;
}