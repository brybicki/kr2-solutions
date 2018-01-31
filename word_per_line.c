#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* print input one word per line */
main()
{
    int c, state, count;
    char word[20] = {0};
    state = OUT;
    count = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            printf("encountered blank, going out of word\n");
            state = OUT;
            printf("%s\n", word);
            count = 0;
        }
        else if (state == OUT) {
            state = IN;
            printf("encountered a letter, going into a word\n");
            word[count] = c;
            ++count;
            printf("current word buffer: %s\n", word);
        }
    }
}
