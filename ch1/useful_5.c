/* count digits, white space, others */

#include <stdio.h>

int main() {
    int c, nWhite, nOther;
    c = nWhite = nOther = 0;
    int nDigits[10];

    for (int i = 0;i<10;++i) {
        nDigits[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            ++nWhite;
        } else if (c >= '0' && c <= '9') {
            ++nDigits[c - '0'];
        } else {
            ++nOther;
        }
    }
    printf("whitespace: %d\nother: %d\n", nWhite, nOther);
    for (int i = 0; i < 10; ++i) {
        printf("%d: %d\n", i, nDigits[i]);
    }
    return 0;
}