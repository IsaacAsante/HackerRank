/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-tutorial-struct/problem
 * Original video explanation: https://www.youtube.com/watch?v=b4J3ag4TPZk
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were added/modified.
 */

#include <iostream>
#include <string>

using namespace std;

struct Student {
    int age, standard;
    string first_name, last_name;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}

