#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *fibstr(int n);

int main() {
    int num = 5;
    char* ans = fibstr(num);
    printf("%s", ans);
}

char *fibstr(int n) {
    if (n == 1){
        char* a = (char*)malloc(sizeof(char) + 1);
        strcpy(a, "a");
        return a;
    }
    if (n == 2){
        char* a = (char*)malloc(sizeof(char) + 1);
        strcpy(a, "b");
        return a;
    }
    char* a = fibstr(n - 2);
    char* b = fibstr(n - 1);
    char* c = (char*)malloc(sizeof(char) * (strlen(a) + strlen(b) + 1));
    strcpy(c, "");
    strcat(c, a);
    strcat(c, b);
    free(a), free(b);
    return c;
}