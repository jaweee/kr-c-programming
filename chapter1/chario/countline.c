#include <stdio.h>

int main()
{
    /* count line in input */
    long nl;
    int c;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("this text has %ld lines", nl);
    return 0;
}