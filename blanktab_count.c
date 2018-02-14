#include <stdio.h>

/* count blanks, tabs and newlines in input */

main()
{
    int c = 0, bl = 0, tb = 0, nl = 0;

    while ((c = getchar()) != EOF)
        if (c == 32)
            ++bl;
        else if (c == '\t')
            ++tb;
        else if (c == '\n')
            ++nl;
    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", bl, tb, nl);
}
