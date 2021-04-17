/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/inheritance-introduction/problem
 * Original video explanation: https://www.youtube.com/watch?v=TeKaDU3AU8o
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <iostream>
using namespace std;

class Triangle {
public:
    void triangle() {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle {
public:
    void isosceles() {
        cout << "I am an isosceles triangle\n";
    }

    void description() {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
};

int main() {
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}
