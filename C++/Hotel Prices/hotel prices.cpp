/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/hotel-prices/problem
 * Original video explanation: https://www.youtube.com/watch?v=-VkKvRq-JzA
 * Last verified on: April 17, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution, which you need to write (excluding the main function).
 * The pre-defined code in the main function of this challenge is not provided below.
 */

#include <iostream>
#include <vector>

using namespace std;

class HotelRoom {
public:
    HotelRoom(int bedrooms, int bathrooms)
        : bedrooms_(bedrooms), bathrooms_(bathrooms) {}

    virtual int get_price() {
        return 50 * bedrooms_ + 100 * bathrooms_;
    }
private:
    int bedrooms_;
    int bathrooms_;
};

class HotelApartment : public HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms)
        : HotelRoom(bedrooms, bathrooms) {}

    int get_price() {
        return HotelRoom::get_price() + 100;
    }
};

