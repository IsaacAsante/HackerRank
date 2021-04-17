/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/virtual-functions/problem
 * Original video explanation: https://www.youtube.com/watch?v=ClPUScbhB4M
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

// Include the string header to simplify input/output of strings
#include <string>

class Person {
protected:
    int age;
    string name;

public:
    Person() {}
    virtual void getdata() {}
    virtual void putdata() {}

    ~Person() {}

};

class Professor : public Person
{
private:
    int publications, cur_id;
    static int id;

public:
    Professor() {
        id++;
        cur_id = id;
    }

    void getdata() {
        // No need for getline()
        cin >> name >> age >> publications;
        // id++;
    }

    void putdata() {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }

    ~Professor() {}
};

class Student : public Person
{
private:
    const int MAX = 6;
    int* marks = new int[MAX];
    int cur_id;
    static int id;

public:
    Student() {
        id++;
        cur_id = id;
    }
    void getdata()
    {
        // Store the student's name and age
        cin >> name >> age;

        // Populate the marks
        for (int i = 0; i < MAX; i++)
        {
            cin >> marks[i];
        }
    }

    void putdata() {
        // Display the student's name and age
        cout << name << " " << age << " ";

        // Compute the sum of the marks
        int sum = 0;
        // Print the marks
        for (int i = 0; i < MAX; i++)
        {
            sum += marks[i];
        }

        // Display the sum of the marks and cur_id;
        cout << sum << " " << cur_id << endl;
    }

    ~Student() {
        delete[] marks;
    }
};

// Initialize static variables
int Professor::id = 0;
int Student::id = 0;