/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/rectangle-area/problem
 * Original video explanation: https://www.youtube.com/watch?v=7GyexVc9cD0
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Include the <sstream> header to simplify the solution.
#include <sstream>

class Rectangle {
protected:
    int width, height;
public:
    Rectangle() {
        width = 0;
        height = 0;
    }

    Rectangle(int w, int h) : width(w), height(h) {}

    virtual void display() {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle {
public:
    RectangleArea() {}

    void read_input() {
        string user_input;
        getline(cin, user_input);
        istringstream ss(user_input);

        ss >> width >> height;
    }

    void display() {
        cout << width * height << endl;
    }
};