/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/arrays-introduction/problem
 * Original video explanation: https://www.youtube.com/watch?v=DKXcdwNYl5k
 * Last verified on: June 26, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were added/modified.
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Create the reverse_array function
void reverse_array(int* arr, int size)
{
    for (int i = size - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int n; // Size of the array
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // If n is between 1 and 1000
    if (n >= 1 && n <= 1000)
    {
        int num_array[n];
        int i = 0; // Use that for indexing

        string num_string; // A set of int values as a string in one line
        getline(cin, num_string);

        int num; // Use this to read individual integers from the line.

        istringstream iss(num_string);

        while (iss >> num)
        {
            if (num >= 1 && num <= 10000)
            {
                num_array[i] = num;
                ++i;
            }
        }

        reverse_array(num_array, n);
    }

    return 0;
}

