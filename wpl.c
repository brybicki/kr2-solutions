#include <stdio.h>
#include <string.h>

/* print input one word per line */
int main(void)
{
    int c, count, lws;      /* lws = last_was_space flag */
    char word[20] = {0};
    count = 0;
    lws = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (lws == 0)
                printf("%s\n", word);
            count = 0;
            memset(word, 0, sizeof(word));  /* reset the array */
            lws = 1;
        }
        else {
            lws = 0;
            word[count] = c;
            ++count;
        }
    }
    return 0;
}
