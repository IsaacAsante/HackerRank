/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/multi-level-inheritance-cpp/problem
 * Original video explanation: https://www.youtube.com/watch?v=UNC_uOD1THk
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
};

//Write your code here.
class Equilateral : public Isosceles {
public:
    void equilateral() {
        cout << "I am an equilateral triangle\n";
    }
};

int main() {

    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
