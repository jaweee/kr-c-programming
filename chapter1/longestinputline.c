#include <stdio.h>

#define MAXLINE 1000

int getline_kr(char s[], int lim);
void copy_kr(char to[], char from[]);

int main() {

    int len, max;
    char temp[MAXLINE];
    char longest[MAXLINE];
    len = max = 0;
    // 不断的读入一行，且此行的长度大于0
    while ((len = getline_kr(temp, MAXLINE)) > 0){
        printf("the value of len and max is %d, %d\n", len, max);
        if (len > max) {
            max = len;
            copy_kr(longest, temp); 
        }
    }
    if (max > 0)
        printf("the longest input line is %s\n", longest);
    return 0;
}


/* read a line into s, and return the length*/
int getline_kr(char s[], int lim) {
    int c, i;
    c = i = 0;
    // i < lim - 1 是为了留下两个字符，复制输入到数组s中
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    // 字符串的长度算上'\n'，并且计算出长度
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    // 返回字符串的长度
    return i;
}

/* 赋值数组内容 */
void copy_kr(char to[], char from[]) {
    int i;
    i = 0;
    printf("from string in copy_kr fun is %s\n", from);
    // '\0' 是字符串的结束标志
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }
}
