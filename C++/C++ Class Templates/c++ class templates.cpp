/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/c-class-templates/problem
 * Updated solution's explanation: https://www.youtube.com/watch?v=oIT2xh7zloQ
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

/* Write the class AddElements here */
/* Necessary optimizations for i/o speed - Don't remove */
struct Optimizer {
    Optimizer() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
};

Optimizer opt;

/*Write the class AddElements here*/
template <class T>
class AddElements {
private:
    T a;
public:
    AddElements(T& b) {
        a = b;
    }

    const T& add(T& n) {
        a += n;
        return a;
    }

    ~AddElements() {}
};

template<>
class AddElements<string> {
private:
    string a;
public:
    AddElements(string& b) {
        a = b;
    }

    const string& concatenate(string& s) {
        a.append(s);
        return a;
    }

    ~AddElements() {}
};