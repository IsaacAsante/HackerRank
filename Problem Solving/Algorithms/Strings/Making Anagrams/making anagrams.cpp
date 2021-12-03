/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/making-anagrams/problem
 * Original video explanation: https://www.youtube.com/watch?v=05mznZNMjvY
 * Last verified on: May 19, 2021
 */

 /* IMPORTANT:
  * This code is meant to be used as a solution on HackerRank (link above).
  * It is not meant to be executed as a standalone program.
  */

int makingAnagrams(string s1, string s2) {
    int alphabet[26] = { 0 }; // All counts initialized to zero
    int sum = 0;
    for (int i = 0; i < s1.size(); i++)
        --alphabet[s1[i] - 'a']; // Decrease for s1

    for (int i = 0; i < s2.size(); i++)
        ++alphabet[s2[i] - 'a']; // Increase for s2

    for (int i = 0; i < 26; i++)
        sum += abs(alphabet[i]); // Get the sum of abs values

    return sum;
}
