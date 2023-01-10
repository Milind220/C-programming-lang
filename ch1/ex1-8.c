/* Exercise 1-8. Write a program to count blanks, tabs, and newlines.*/

#include <stdio.h>

int main()
{
    int c, blanks, tabs, lines;
    c = blanks = tabs = lines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
        } else if (c == '\t') {
            ++tabs;
        } else if (c == '\n') {
            ++lines;
        } else {
            continue;
        }
    }
    printf("Blanks: %d\nTabs: %d\nLines: %d\n", blanks, tabs, lines);
    return 0;
}