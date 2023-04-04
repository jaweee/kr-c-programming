#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    printf("fahr\tcelsirs\n");
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        /* code */
        printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);
    }

    return 0;
}