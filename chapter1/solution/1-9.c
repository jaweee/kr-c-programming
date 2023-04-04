#include <stdio.h>

#define MaxBuf 100

int main(){
    int c, space_flag, cur;
    int buf[MaxBuf];
    c = space_flag = cur = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && space_flag == 0) {
            buf[++cur] = c;
            space_flag = 1;
        }
        else if (c != ' ' ) {
            buf[++cur] = c;
            space_flag = 0;
        }
    }
    printf("下面事解决去除多余空格的输出");
    putchar('\n');
    for (int i = 0; i < cur; ++i){
        putchar(buf[i]);
    }
    putchar('\n');
    return 0;
}
