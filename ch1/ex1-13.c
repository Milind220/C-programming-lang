/* Exercise 1-13. Write a program to print a histogram of the lengths of words 
in its input. It is easy to draw the histogram with the bars horizontal; a 
vertical orientation is more challenging.*/

#include <stdio.h>

#define MAX_WORDS 20
#define DEFAULT_LENGTH 15
int main()
{
    // Create and initialize variables
    int lenWords[MAX_WORDS];
    int c, wordCount;
    int word, longestWord;

    c = wordCount = word = 0; 
    longestWord = DEFAULT_LENGTH;

    for (int i = 0; i < MAX_WORDS; ++i)
    {
        lenWords[i] = 0;
    }

    // Count the length of words
    while ((c = getchar()) != EOF && wordCount < MAX_WORDS)
    {
        if (c == ' ' ||  c == '\t' || c == '\n')
        {
            continue;
        } else {
            ++lenWords[wordCount];
            while ((c = getchar()) != EOF) 
            {
                if (c == ' ' || c == '\t' || c == '\n') {
                    ++wordCount;
                    break;
                } else {
                    ++lenWords[wordCount];
                }
            }
        }
    }
    // // Check the word length finding algorithm
    // for (int i = 0; i < MAX_WORDS; ++i)
    // {
    //     printf("%d: %d\n", i+1, lenWords[i]);
    // }

    // Print the histogram horizontally
    for (int i = 0; i < MAX_WORDS; ++i) {
        word = lenWords[i];
        if (word > longestWord) {
            longestWord = word;
        }
    }
    printf("\n");
    for (int i = 0; i < longestWord; ++i){
        printf("----");
    }
    printf("\n");
    for (int i = 0; i < MAX_WORDS; ++i) {
    printf("| %2d |", i + 1);
        for (int j = 0; j < lenWords[i]; ++j) {
            putchar('*');
        }
        printf("\n");
    }
    for (int i = 0; i < longestWord; ++i){
        printf("----");
    }
    printf("\n");
}