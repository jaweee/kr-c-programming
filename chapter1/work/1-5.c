#include <stdio.h>

int main()
{
    /* 验证表达式 getchar() != EOF 的值 */

    printf("%d\n", getchar() != EOF);
    printf("%d\n", EOF);

    return 0;
}