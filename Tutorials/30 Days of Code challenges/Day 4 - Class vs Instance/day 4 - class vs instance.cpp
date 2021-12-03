/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-class-vs-instance/problem
 * Original video explanation: https://www.youtube.com/watch?v=xPW52llktRY
 * Last verified on: 03 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * Only the part you have to fill in (for this challenge) is pasted below.
 */

class Person {
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge) {
    // Add some more code to run some checks on initialAge
    if (initialAge > 0) age = initialAge;
    else {
        age = 0;
        cout << "Age is not valid, setting age to 0." << endl;
    }
}

void Person::amIOld() {
    // Do some computations in here and print out the correct statement to the console 
    if (age < 13) cout << "You are young." << endl;
    else if (age >= 13 && age < 18) cout << "You are a teenager." << endl;
    else cout << "You are old." << endl;
}

void Person::yearPasses() {
    // Increment the age of the person in here
    age++;
}