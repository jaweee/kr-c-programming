#include <stdio.h>
#include <conio.h>

#define MAX_BUF 100

int main() {
    int c, len, cur;
    int buf[MAX_BUF];
    cur = len = 0;
    while ((c = getch()) != EOF && cur < MAX_BUF) {
        if (c == '\t') {
            buf[cur++] = '\\';
            buf[cur++] = 't';
        }
        else if (c == '\b') {
            buf[cur++] = '\\';
            buf[cur++] = 'b';
        }
        else if (c == '\\') {
            buf[cur++] = '\\';
            buf[cur++] = '\\';
        }
        else {
            buf[cur++] = c; 
        }
    }
    printf("下面是修改制表符、回退符、反斜杠符的文本");
    putchar('\n');
    for (int i = 0; i < cur; ++i) {
        putchar(buf[i]);
    }
    printf("\n");
    return 0;
}
