/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/service-lane/problem
 * Original video explanation: https://www.youtube.com/watch?v=Vg-wXEZsmMI
 * Last verified on: March 26, 2021
 */

/*
 * Note that the full code has been provided for this solution, because the original code from this challenge has to be modified.
 * The vector of widths is not provided in the original code.
 * It has to be passed as an argument to the serviceLane() function call inside the main function.
 * And therefore it must be added as a third parameter to the serviceLane() function.
*/

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the serviceLane function below.
vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int> width) {
    cout << "Value of n: " << n << endl;
    cout << "Number of cases: " << cases.size() << endl;
    cout << "Number of widths: " << width.size() << endl;
    int i, j, k, smallest;
    vector<int> ans(cases.size());
    for (int x = 0; x < cases.size(); x++) {
        i = cases[x][0];
        j = cases[x][1];
        k = i;
        smallest = INT_MAX;
        while (k <= j) {
            smallest = min(width[k], smallest);
            k++;
        }
        ans[x] = smallest;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nt_temp;
    getline(cin, nt_temp);

    vector<string> nt = split_string(nt_temp);

    int n = stoi(nt[0]);

    int t = stoi(nt[1]);

    string width_temp_temp;
    getline(cin, width_temp_temp);

    vector<string> width_temp = split_string(width_temp_temp);

    vector<int> width(n);

    for (int i = 0; i < n; i++) {
        int width_item = stoi(width_temp[i]);

        width[i] = width_item;
    }

    vector<vector<int>> cases(t);
    for (int i = 0; i < t; i++) {
        cases[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> cases[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = serviceLane(n, cases, width);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
