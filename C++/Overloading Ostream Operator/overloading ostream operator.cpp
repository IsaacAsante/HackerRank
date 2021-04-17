/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/overloading-ostream-operator/problem
 * Original video explanation: https://www.youtube.com/watch?v=QZHbZ0ya8YQ
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Enter your code here.
ostream& operator<<(ostream& out, Person& p) {
    out << "first_name=" << p.get_first_name() << ","
        << "last_name=" << p.get_last_name();
    return out;
}

