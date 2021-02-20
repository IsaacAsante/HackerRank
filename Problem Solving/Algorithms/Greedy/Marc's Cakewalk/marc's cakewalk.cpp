/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/marcs-cakewalk/problem
 * Original video explanation: https://www.youtube.com/watch?v=QBTsPE91Nvw
 * Last verified on: 20 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// This is the function to complete (my code)
long marcsCakewalk(vector<int> calorie) {
    // Sorting the vector in ascending order
    sort(calorie.begin(), calorie.end());

    // Count the number of cakes
    int cakes = calorie.size();

    // X = Exponent, 
    int x = 0;
    long miles = 0;
    for (int i = cakes - 1; i >= 0; --i) {
        miles += calorie[i] * pow(2, x);
        cout << miles << " ";
        x++;
    }
    return miles;
}