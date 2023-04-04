#include <stdio.h>

int main()
{
    long ns, nt, nl;
    int c;
    c = ns = nt = nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++ns;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }
    printf("the num of space is %ld\n", ns);
    printf("the num of table char is %ld\n", nt);
    printf("the num of line is %ld\n", nl);
    return 0;
}
