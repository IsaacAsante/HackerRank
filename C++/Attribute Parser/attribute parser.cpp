/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/attribute-parser/problem
 * Original video explanation: https://www.youtube.com/watch?v=w8gEr1VEvbc
 * Last verified on: April 17, 2021
 */

 /* IMPORTANT:
  * This is the full code for the solution.
  * Some headers were added/modified.
  */

#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    string curr = "", attr_name;
    map<string, string> m;
    cin >> n >> q;
    cin.ignore();

    // For every word in the HRML Line (space delimiter), check:
    for (int i = 0; i < n; i++) {
        string line, tag, extract;
        getline(cin, line);
        stringstream ss(line);

        // Process the HRML lines
        while (getline(ss, extract, ' ')) {
            // If it's a tag
            if (extract[0] == '<') {
                // If it's an opening tag
                if (extract[1] != '/') {
                    // Remove the opening bracket
                    tag = extract.substr(1);
                    // For tags without attributes
                    if (tag[tag.length() - 1] == '>') {
                        // Remove the closing bracket
                        tag.pop_back();
                    }
                    // Check if any nesting is needed
                    if (curr.size() > 0) {
                        // Nest this tag
                        curr += "." + tag;
                    }
                    else {
                        curr = tag;
                    }
                }
                // If it's a closing tag
                else {
                    tag = extract.substr(2, (extract.find('>') - 2));
                    // Check if a nested tag has to be closed

                    size_t pos = curr.find("." + tag);
                    if (pos != string::npos) {
                        // Remove the nested tag
                        curr = curr.substr(0, pos);
                    }
                    else {
                        // All tags are closed
                        curr = "";
                    }
                }
            }

            // If's an attribute's value
            else if (extract[0] == '"') {
                // Capture the full value
                size_t pos = extract.find_last_of('"');
                string attr_value = extract.substr(1, pos - 1);
                // Add to the map
                m[attr_name] = attr_value;
            }

            else {
                if (extract != "=") {
                    // It's definitely an attribute name
                    attr_name = curr + "~" + extract;
                }
            }
        }
    }

    // Get the values with the queries
    string query;
    for (int i = 0; i < q; i++) {
        getline(cin, query);

        // Search in the map
        map<string, string>::iterator itr = m.find(query);
        if (itr != m.end()) {
            cout << itr->second << endl;
        }
        else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}

/*
 * Credit to rwan7727 for the original solution idea: https://www.hackerrank.com/challenges/attribute-parser/forum/comments/376477 
 */