/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-testing/problem
 * Original video explanation: https://www.youtube.com/watch?v=4gcF--eN7tE
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Using structs for simplicity
struct TestDataEmptyArray {
    static vector<int> get_array() {
        return vector<int>{};
    }
};

struct TestDataUniqueValues {
    static vector<int> get_array() {
        return vector<int>{1, 2};
    }

    static int get_expected_result() {
        return 0;
    }
};

struct TestDataExactlyTwoDifferentMinimums {
    static vector<int> get_array() {
        return vector<int>{1, 2, 3, 1};
    }

    static int get_expected_result() {
        return 0;
    }
};
