/* Revise the main routine of the longest-line program so it will correctly print
the length of arbitrarily long input lines, and as much as possible of the text. */

#include <stdio.h>

#define MAXLINE 1000    // maximum input line size

int getLine(char s[]);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
	int len;    // Current line length.
	char line[MAXLINE];    // current input line.

    while ((len = getLine(line)) > 0) {
		printf("length: %d\n", len);
		printf("line: %s\n", line);
	}
	return 0; 
}

/* getline:  read a line into s, return length */
int getLine(char s[])
{
	int c, i;
    for (i=0; i<MAXLINE-1 && (c=getchar())!=EOF && c!= '\n'; ++i) {
        s[i] = c;
	} 
    if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i; 
}

    /* copy:  copy ′from′ into ′to
    ′; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
		++i;
}