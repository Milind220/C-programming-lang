/* Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say
every n columns. Should n be a variable or a symbolic parameter?*/

/* 
? General Structure
* While (not EOF)
*   ++chars
*   if (chars == TABSTOP) chars = 0
*   if (tab)
*       put (TABSTOP - chars) x ' '
*   else
*       putchar
*/

#include <stdio.h>

#define TABSTOP 6

int main()
{
    char c;
    int num = 0;
    while ((c = getchar()) != EOF)
    {
        ++num;
        if (num == TABSTOP) num = 0;
        if (c == '\t') {
            num = 0;
            for (int i = 0; i < TABSTOP - num; ++i) {
                putchar(' ');
            }
        } else if (c == '\n') {
            num = 0;
        } else {
            putchar(c);
        }
    }
    return 0;
}