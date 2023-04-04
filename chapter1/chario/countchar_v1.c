#include <stdio.h>

int main()
{
    long nc = 0;
    while (getchar() != EOF)
    {
        /* code */
        nc++;
    }
    printf("the number is %ld\n", nc);
    return 0;
}