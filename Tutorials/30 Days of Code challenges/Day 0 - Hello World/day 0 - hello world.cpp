/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-hello-world/problem
 * Original video explanation: https://www.youtube.com/watch?v=ggxVG9GWW78
 * Last verified on: 25 March, 2021
 */

int main() {
    // Declare a variable named 'input_string' to hold our input.
    string input_string;

    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string);

    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;

    // Write a line of code here that prints the contents of input_string to stdout.
    cout << input_string << endl;

    return 0;
}