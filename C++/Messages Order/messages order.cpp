/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/messages-order/problem
 * Original video explanation: https://www.youtube.com/watch?v=aLgmSZrm7Ck
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

class Message {
private:
    string msg;
    int instance_index;
public:
    inline static int index;

    Message() {}

    Message(string txt) : msg(txt) {}

    const string& get_text() {
        return msg;
    }

    const int& get_index() {
        return instance_index;
    }

    void set_index(int i) {
        instance_index = i;
    }

    bool operator< (Message& other) {
        bool answer = this->instance_index < other.get_index();
        return answer;
    }
};

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        Message msg(text);
        msg.set_index(Message::index++);
        return msg;
    }
};

