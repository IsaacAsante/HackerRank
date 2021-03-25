/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/the-time-in-words/problem
 * Original video explanation: https://www.youtube.com/watch?v=Ny-N2q9UOFw
 * Last verified on: March 26, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    map<int, string> words = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},
        {10, "ten"},
        {11, "eleven"},
        {12, "twelve"},
        {13, "thirteen"},
        {14, "fourteen"},
        {15, "quarter"}, // Not fifteen
        {16, "sixteen"},
        {17, "seventeen"},
        {18, "eighteen"},
        {19, "nineteen"},
        {20, "twenty"},
        {21, "twenty one"},
        {22, "twenty two"},
        {23, "twenty three"},
        {24, "twenty four"},
        {25, "twenty five"},
        {26, "twenty six"},
        {27, "twenty seven"},
        {28, "twenty eight"},
        {29, "twenty nine"},
        {30, "half"} // Not "thirty"
    };

    // Specific cases
    string minute_word;
    bool show_minutes = true;
    if (m == 0) return words[h] + " o' clock";
    else if (m == 1) minute_word = "one minute";
    else if (m == 15 || 60 - m == 15 || m == 30) {
        minute_word = words[m];
        show_minutes = false;
    }
    else minute_word = words[m] + " minutes";

    // General rule of formatting
    if (m > 30) {
        if (show_minutes)
            return words[60 - m] + " minutes to " + words[h + 1];
        return words[60 - m] + " to " + words[h + 1];
    }
    return minute_word + " past " + words[h]; // Else
}