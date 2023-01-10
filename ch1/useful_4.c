/* Write a program to count the number of lines, words, and characters provided in the input.*/

#include "stdio.h"

#define IN 0
#define OUT 1

int main() 
{
    int c, nl, nw, nc, state;
    c = nl = nw = nc = 0;
    state = OUT;

    while ((c = getchar()) != EOF)    
    {
        ++nc;
        if (c == '\n') ++nl;
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("lines: %d\n", nl);
    printf("words: %d\n", nw);
    printf("characters: %d\n", nc);
    return 0;
}