/* rewrite the longest-line program with line, longest, and max as external variables.*/
#include <stdio.h>

#define MAX_LENGTH 100
#define EOF_INDICATOR 0

int getLine(void);
void copyLine(int length);

char currLine[MAX_LENGTH];
char longestLine[MAX_LENGTH];
int longestLen;
 
int main()
{   
    int currLen = 0;
    extern int longestLen;
    extern char longestLine[];

    while ((currLen = getLine()) != EOF_INDICATOR) {
        if (currLen > longestLen) {
            copyLine(currLen);
            longestLen = currLen;
        }
    }
    printf("\nlongest line: %s", longestLine);
    printf("length: %d\n", longestLen);
    return 0;
}

int getLine()
{
    int c, len;
    c = len = 0;
    extern char currLine[];

    while ((c = getchar()) != EOF && len < MAX_LENGTH) {
        currLine[len] = c;
        ++len;
        if (c == '\n') {
            ++len;
            currLine[len] = '\0';    // terminate the string.
            return len; 
        }
    }
    return 0; // only if EOF is encountered
}

void copyLine(int length)
{
    extern char currLine[];
    extern char longestLine[];

    for (int i = 0; i < length; ++i) 
    {
        if (currLine[i] != '\0') {
            longestLine[i] = currLine[i];
        }
    }
}

// * DEFINITION: place where variable is created or assigned storage.
// ? DECLARATION: place where nature of variable is stated, but no storage is allocated.