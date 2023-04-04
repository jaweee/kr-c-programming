#include <stdio.h>

#define OUT 0
#define IN 1

int main() {
    int c, nl, nc, nw, state;
    c = nl = nc = nw = state = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            ++nw;
            state = IN;
        
       }
    }
    printf("%d, %d, %d\n", nc, nl, nw);
    return 0;
}
