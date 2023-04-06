#include <stdio.h>

#define MAXLENGTH 100

int main() {
    int c, i;
    char temp[MAXLENGTH];
    i = 0;
    while ((c = getchar()) != '\n' && i < MAXLENGTH)
        temp[i++] = c;
    temp[i++] = '\n';
    temp[i] = '\0';
    printf("%s\n", temp);
}
