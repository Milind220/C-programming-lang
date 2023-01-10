/*  let’s write a program that reads a set of text lines and prints 
the longest. */

/* 
? General Outline of program
*   while (there’s another line)
*       if (it’s longer than the previous longest)
*           save it
*           save its length
*   print longest line
*/

#include <stdio.h>

#define MAX_LENGTH 100
#define EOF_INDICATOR 0

int getLine(char line[]);
void copyLine(char from[], int length, char to[]);

int main()
{   
    char currLine[MAX_LENGTH];
    char longestLine[MAX_LENGTH];
    int currLen, longestLen;
    longestLen = currLen = 0;

    while ((currLen = getLine(currLine)) != EOF_INDICATOR) {
        if (currLen > longestLen) {
            copyLine(currLine, currLen, longestLine);
            longestLen = currLen;
        }
    }
    printf("\nlongest line: %s", longestLine);
    printf("length: %d\n", longestLen);
    return 0;
}

int getLine(char line[])
{
    int c, len;
    c = len = 0;

    while ((c = getchar()) != EOF && len < MAX_LENGTH) {
        line[len] = c;
        ++len;
        if (c == '\n') {
            ++len;
            line[len] = '\0';    // terminate the string.
            return len; 
        }
    }
    return 0; // only if EOF is encountered
}

void copyLine(char from[], int length, char to[])
{
    for (int i = 0; i < length; ++i) 
    {
        if (from[i] != '\0') {
            to[i] = from[i];
        }
    }
}