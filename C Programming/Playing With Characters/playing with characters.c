/* Author: Isaac Asante
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/playing-with-characters/problem
 * Original video explanation: https://www.youtube.com/watch?v=zbKhgLECOEc
 * Last verified on: April 22, 2021
 */

/* IMPORTANT:
 * This is the full code for the solution.
 * Some headers were removed/modified.
 */

#include <stdio.h>

int main()
{
    char s[50], sen[100], ch;
    scanf("%c", &ch);
    // You may also use gets() for strings in C.
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    return 0;
}
