/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/game-of-thrones/problem
 * Original video explanation: https://www.youtube.com/watch?v=2iJ4_sli784
 * Last verified on: 03 January, 2022
 */

/* IMPORTANT:
 * This is the full code for the solution, including their pre-defined code.
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    bool odd_detected = false;
    unordered_map<char, unsigned int> tracker;
    // Count the frequency of characters
    for (char c : s)
        tracker[c]++;
    // Every character must appear an even amount of time, although...
    for (auto item : tracker) {
        // ...1 character may still appear an odd num of times (middle character)
        if (item.second % 2) {
            if (odd_detected) return "NO";
            else odd_detected = true;
        }
    }
    // If the program didn't return earlier, then we may have a palindrome
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
