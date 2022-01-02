/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-queues-stacks/problem
 * Original video explanation: https://www.youtube.com/watch?v=FiuVyWCq93A
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * Make sure you add the additional headers.
 * Note that this solution only includes the Solution class definition.
 */

#include <iostream>
// ADD THESE HEADERS
#include <queue>
#include <stack>

using namespace std;

class Solution {
    //Write your code here
private:
    stack<char> s;
    queue<char> q;
    
public:
    Solution() {}    
    void pushCharacter(const char& ch) {
        s.push(ch);
    }
    
    void enqueueCharacter(const char& ch) {
        q.push(ch);
    }
    
    const char popCharacter() {
        char toRemove = s.top();
        s.pop();
        return toRemove;
    }
    
    const char dequeueCharacter() {
        char toRemove = q.front();
        q.pop();
        return toRemove;
    }
    
    ~Solution() {};
};
