#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        /* code */
        printf(" ");
        putchar(c);
    }
}