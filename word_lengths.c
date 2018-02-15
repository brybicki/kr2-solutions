#include <stdio.h>
#include <string.h>

/* print legths of words in input */
int main(void) {
    
    char buffer[50];
    int lengths[1024];
    int c, i, lws, count, buf_count;

    lws = count = buf_count = 0;
    memset(buffer, 0, sizeof(buffer));
    memset(lengths, 0, sizeof(lengths));

    while ((c = getchar()) != EOF) {
        /* write word's length to array upon hitting white space, reset buff */
        if (c == ' ' || c == '\n' || c == '\t') {
            if (lws == 0) {                 // if last char was not a space
                lengths[count] = buf_count;
                ++count;
            }
            buf_count = 0;
            memset(buffer, 0, sizeof(buffer));
            lws = 1;
        }

        /* write chars to the buffer while keeping count of the word's length */
        else {
            lws = 0;
            buffer[buf_count] = c;
            ++buf_count;
        }
    }
    printf("lengths:");
    for (i = 0; i < count; ++i)
        if (i == (count - 1))               // avoid trailing comma on last
            printf(" %d\n", lengths[i]);
        else
            printf(" %d,", lengths[i]);

    return 0;
}
