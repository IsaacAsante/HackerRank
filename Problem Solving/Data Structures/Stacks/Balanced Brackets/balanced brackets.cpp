/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/balanced-brackets/problem
 * Original video explanation: https://www.youtube.com/watch?v=tgSow9IftX0
 * Last verified on: March 28, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> brackets;
    for (char& c : s) {
        if (c == '[' || c == '{' || c == '(')
            brackets.push(c);
        else {
            // Verify empty or check with ASCII dec value
            if (brackets.empty() || abs(brackets.top() - c) > 2) return "NO";
            else brackets.pop();
        }
    }
    if (brackets.empty()) return "YES";
    return "NO"; // Stack still has opening tags!
}