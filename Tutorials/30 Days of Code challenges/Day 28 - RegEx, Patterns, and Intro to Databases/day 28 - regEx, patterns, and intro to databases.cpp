/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-regex-patterns/problem
 * Original video explanation: https://www.youtube.com/watch?v=0kndgKqji7Y
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution, including their pre-defined code.
 */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// I'm solving this challenge inside the main() function

int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    
    // I'm creating this vector for sorting later
    vector<string> names;
    
    for (int N_itr = 0; N_itr < N; N_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        string firstName = first_multiple_input[0];

        string emailID = first_multiple_input[1];
        
        /* Check if emailID contains '@gmail.com'
         * Don't forget the '@', because there's a test case
         * like this: alice@alicegmail.com
         */
        if (emailID.find("@gmail.com") != string::npos)
            names.push_back(firstName);
    }
    
    // Finally, print the sorted vector of names
    sort(names.begin(), names.end());
    for (string& name : names)
        cout << name << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
