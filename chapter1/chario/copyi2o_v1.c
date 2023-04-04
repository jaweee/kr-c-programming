#include <stdio.h>

main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        /* code */
        putchar(c);
        c = getchar();
    }
}