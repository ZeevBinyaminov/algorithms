#include <stdio.h>
#include <string.h>

int wcount(char *s) {
  int counter = 0;
  char *token = strtok(s, " ");
  while (token != NULL) {
    token = strtok(NULL, " ");
    counter++;
  }
  return counter;
}

int main() {
  char string[] = "      c]bf& N 5hpHAhV20? 6 }IH0 Q< } 6   ";
  printf("%d", wcount(string));
  return 0;
}