/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/too-high-boxes/problem
 * Original video explanation: https://www.youtube.com/watch?v=ECfeQNCBqCU
 * Last verified on: April 22, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */

struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
	int length, width, height;
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
	return b.length * b.width * b.height;
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
	return (b.height >= MAX_HEIGHT) ? 0 : 1;
}

