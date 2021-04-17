/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/box-it/problem
 * Original video explanation: https://www.youtube.com/watch?v=B1yzpvUQ2_g
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code only features the Box class, which you have to implement. 
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

//Implement the class Box  
class Box {
private:
    int l, b, h;

    // The class should have the following functions : 
public:


    // Box(int,int,int);
    // Box(Box);

        // Default
    Box() : l(0), b(0), h(0) {}

    Box(int x, int y, int z) : l(x), b(y), h(z) {}

    Box(const Box& B) {
        this->l = B.l;
        this->b = B.b;
        this->h = B.h;
    };

    // Getters
    int getLength() const {
        return l;
    }

    int getBreadth() const {
        return b;
    }

    int getHeight() const {
        return h;
    }

    // Calulcate the volume
    long long CalculateVolume() {
        long long volume = (long long)l * b * h;
        return volume;
    }

    bool operator<(Box& other) {
        bool condition1 = l < other.l;
        bool condition2 = b < other.b&& l == other.l;
        bool condition3 = h < other.h&& b == other.b && l == other.l;
        if (condition1 || condition2 || condition3)
            return true;
        return false;
    }

    // Friend function
    friend ostream& operator<<(ostream& out, Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

