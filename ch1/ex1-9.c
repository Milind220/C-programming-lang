/* Exercise 1-9. Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank.*/

// ! NOTE: I solved this using only the knowledge provided thus far in the book.
// ! This is not an optimised way to do this.

#include <stdio.h>

int main()
{
    int c = 0;
    int spaces = 0;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
        if (c == ' ')
        {
            while ((c = getchar()) != EOF)
            {
                if (c != ' ') {
                    putchar(c);
                    break;
                }
            }
        }
    }
    return 0;
}