#include <stdio.h>

#define MAXLINE 1000
#define OUT = 0
#define IN = 1

int main() {
    char ret_buf[MAXLINE];
    int c, len, once;
    c = len = 0;
    once = 1;
    while ((c = getchar()) != EOF) {
        /*if (c == '\t' || c == '\n' || c == ' ' && once == 1){
            c = '\n';
            ret_buf[len++] = c;
            once = 0;
            continue;
        }
        else if (c == '\t' || c == '\n' || c == ' ' && once == 0) {
            continue;
        }*/
        if (c == '\t' || c == '\n' || c == ' ') {
            if (once == 1) {
                c = '\n';
                ret_buf[len++] = c;
                once = 0;
            }
            else {
                continue;
            }
        }
        else {
            once = 1;
            ret_buf[len++] = c;
        }
    }
    ret_buf[len] = '\0';
    printf("\nshift line string is flowing behind\n%s\n", ret_buf);
}
