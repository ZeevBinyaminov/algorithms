#include <stdio.h>
#include <string.h>

int wcount(char *s);

int main() {
    char string[] = "one two three words     word    word";
    printf("%d", wcount(string));
    return 0;
}


int wcount(char *s) {
    int counter = 0;
    char* token = strtok(s, " ");
    while (token != NULL) {
        token = strtok(NULL, " ");
        counter++;
    }
    return counter;
}
