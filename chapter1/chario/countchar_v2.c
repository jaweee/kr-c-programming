#include <stdio.h>

int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;

    printf("the number is %0.2f\n", nc);
    return 0;
}