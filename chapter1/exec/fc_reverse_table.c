#include <stdio.h>

int main()
{
    int fahr = 0, celsius = 0;
    int upper, step;

    upper = 300;
    step = 20;

    printf("fahr\tcelsirs\n");
    for (int i = upper; i >= 0; i -= step)
    {
        fahr = i;
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
    }

    return 0;
}
