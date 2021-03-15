/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/strings-xor/problem
 * Original video explanation: https://www.youtube.com/watch?v=m65jhGwtWrg
 * Last verified on: 23 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

string strings_xor(string s, string t) {

    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[i])
            res.append("0");
        else
            res.append("1");
    }

    return res;
}