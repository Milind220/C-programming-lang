/* Exercise 1-12. Write a program that prints its input one word per line.*/

#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF) {
       if (c == '\n' || c == '\t' || c == ' ') 
       {
        putchar('\n');    // newline if not a word
       } else {
        putchar(c);
       }
    }
    return 0;
}