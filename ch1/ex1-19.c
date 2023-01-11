/* Write a function reverse(s) that reverses the character string s.
Use it to write a program that reverses its input a line at a time.*/
#include <stdio.h>

#define MAXLINE 1000    // maximum input line size

int getLine(char s[]);
void copy(char to[], char from[]);
void reverse(char to[], char from[], int length);

/* print longest input line */
int main()
{
	int len;    // Current line length.
	char line[MAXLINE];    // current input line.
    char reversedLine[MAXLINE]; // reversed line

    while ((len = getLine(line)) > 0) {
        reverse(reversedLine, line, len);
        printf("%s\n", reversedLine);
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

void reverse(char to[], char from[], int length) {
    for (int i = 0; i < length; ++i) {
        to[i] = from[length - 1 - i];
    }
    to[length] = '\0';
}