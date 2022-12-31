#include <string.h>
#include <stdio.h>

int find_math(char* p, char* t);

int main() {
    char string[] = "there are some words";
    char substring[] = "some";
    printf("%d", find_math(substring, string));
}

int find_math(char* p, char* t) {
    int i, j;
    int plen, tlen;

    plen = strlen(p); // substring
    tlen = strlen(t); // string from

    for (i = 0; i <= (tlen-plen); i++) {
        j = 0;
        while ((j < plen) && (t[i + j] == p[i])) {
            j++;
        }
        if (j == plen) { return i; }
    }
    return -1;
}

