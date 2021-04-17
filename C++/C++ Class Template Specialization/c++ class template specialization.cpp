// TODO: Record the video for the "C++ Class Template Specialization" challenge in C++.

/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/cpp-class-template-specialization/problem
 * Original video explanation: Pending
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Define specializations for the Traits class template here.
template<>
struct Traits<Color> {
    static const char* name(int n) {
        const char* arr[3] = { "red", "green", "orange" };
        if (n >= 0 && n < 3)
            return arr[static_cast<int>((Color)n)];
        // Or just use n
        return "unknown";
    }
};

template<>
struct Traits<Fruit> {
    static const char* name(int n) {
        const char* fruit_arr[3] = { "apple", "orange", "pear" };
        if (n >= 0 && n < 3)
            return fruit_arr[static_cast<int>((Fruit)n)];
        // Or just use n
        return "unknown";
    }
};

