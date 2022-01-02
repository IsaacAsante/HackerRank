/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/30-abstract-classes/problem
 * Original video explanation: https://www.youtube.com/watch?v=JHlnC8NfPik
 * Last verified on: 27 December, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 * It only includes the definition for the MyBook class.
 */

// Write your MyBook class here
class MyBook : public Book {
    private:
        int price;
    public:
        MyBook(string title, string author) : Book(title, author) {}
        MyBook(string title, string author, int price) : Book(title, author) {
        this->price = price;
    }
        void display() override {
            cout << "Title: " << title 
                << "\nAuthor: " << author 
                << "\nPrice: " << price << endl; 
        }
};
// End Class