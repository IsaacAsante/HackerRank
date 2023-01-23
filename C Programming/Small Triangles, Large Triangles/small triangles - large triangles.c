/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem
 * Original video explanation: Pending
 * Last verified on: January 24, 2023
 */

 /* IMPORTANT:
  * This is the full code for the solution.
  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;


void sort_by_area(triangle* tr, int n) {

    float areas[n]; // array storing triangle areas
    double p, S; // for calculating arrays

    // Calculate triangle areas
    for (int i = 0; i < n; i++) {
        p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        S = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
        // Add to the array
        areas[i] = S;
    }

    /*
     * Sort the array and map swapping with original triangle* param
     * I'm using Insertion Sort algorithm.
     */
    for (int i = 1; i < n; i++) {
        if (areas[i] < areas[i - 1]) {
            int j = i;
            // Swap values
            while (j > 0 && areas[j] < areas[j - 1]) {
                double temp = areas[j];
                triangle temp_tr = tr[j];

                areas[j] = areas[j - 1];
                tr[j] = tr[j - 1];

                areas[j - 1] = temp;
                tr[j - 1] = temp_tr;

                --j;
            }
        }
    }

}

int main()