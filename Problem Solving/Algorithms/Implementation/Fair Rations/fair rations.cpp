/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/fair-rations/problem
 * Original video explanation: https://www.youtube.com/watch?v=lO3AWxb9OyQ
 * Last verified on: March 26, 2021
 */
 
 /* IMPORTANT:
 * The entire code is provided for this challenge because the main function has to be customized.
 * This is because what we need to print can either be an integer (int) or a string.
 * See Lines 56-60.
 * This code must be ran on HackerRank's platform.
 */

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the fairRations function below.
int fairRations(vector<int> B) {
    int loaves = 0, i = 0, end = B.size() - 1;
    while (i < end) {
        if (B[i] % 2) {
            B[i]++, B[i + 1]++;
            loaves += 2;
        }
        i++;
    }
    if (B[end] % 2) return -1;
    else return loaves;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string B_temp_temp;
    getline(cin, B_temp_temp);

    vector<string> B_temp = split_string(B_temp_temp);

    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        int B_item = stoi(B_temp[i]);

        B[i] = B_item;
    }

    int result = fairRations(B);

    // ADD THIS:
    if (result == -1)
        fout << "NO" << "\n";
    else
        fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
        return x == y and x == ' ';
        });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
