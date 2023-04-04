#include <stdio.h>

int main()
{

    int f = 0, c = 0;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("c\tf\n");
    while (lower < upper)
    {
        f = 9 * c / 5 + 32;
        printf("%d\t%d\n", c, f);
        lower += step;
        c = lower;
    }
    return 0;
}