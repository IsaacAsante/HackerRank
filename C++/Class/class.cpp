/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-tutorial-class/problem
 * Original video explanation: https://www.youtube.com/watch?v=Ruc_3fvVYGQ
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 */

#include <iostream>
#include <sstream>
using namespace std;

/* Create the Student class */
class Student {
private:
    int age, standard;
    string first_name, last_name;
public:
    Student() {}

    /* Getters */
    int get_age() {
        return age;
    }

    int get_standard() {
        return standard;
    }

    string get_first_name() {
        return first_name;
    }

    string get_last_name() {
        return last_name;
    }

    /* Setters */
    void set_age(int age) {
        this->age = age;
    }

    void set_standard(int standard) {
        this->standard = standard;
    }

    void set_first_name(string name) {
        first_name = name;
    }

    void set_last_name(string name) {
        last_name = name;
    }

    /* To_string() method below */
    string to_string() {
        string data = std::to_string(age) + "," + first_name + "," + last_name
            + "," + std::to_string(standard);
        return data;
    }

    /* Destructor */
    ~Student() {}
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

