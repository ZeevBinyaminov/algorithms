#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *concat(char **s, int n);


int main() {
    char* strings[] = {"123", "345", "54223"};
    printf("%s", concat(strings, 3));
    return 0;
}

char *concat(char **strings, int n) {
    char* result;
    int res_size = 0;
    for (int i = 0; i < n; i++) {
        res_size += strlen(strings[i]);
        result = realloc(result, sizeof(char) * res_size);
        strcat(result, strings[i]);
    } 
    return result;
}
