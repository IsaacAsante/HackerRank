/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/time-conversion/problem
 * Original video explanation: https://www.youtube.com/watch?v=sYZ7j5OSwxY
 * Last verified on: 16 February, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Complete the timeConversion function below.
string timeConversion(string s) {
    string hour_string = s.substr(0, 2);
    int hour = stoi(hour_string);
    size_t pos = s.find("PM");
    if (pos != string::npos) {
        if (hour + 12 < 24)
            hour_string = to_string(hour + 12);
    }
    else {
        if (hour == 12)
            hour_string = "00";
    }
    return s.replace(0, 2, hour_string).erase(s.size() - 2);
}