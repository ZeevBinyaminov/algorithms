#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char **strings, int n) {
  char *result;
  int res_size = 0;
  for (int i = 0; i < n; i++) {
    res_size += strlen(strings[i]);
    result = realloc(result, sizeof(char) * res_size);
    strcat(result, strings[i]);
  }
  return result;
}

int main() {
  char *r[] = {"728298202./,&9-=", "qsghplklkhgghhghg", "\\.|||||lkok?,."};
  char *strings[] = {"123", "345", "54223"};
  printf("%s", concat(r, 3));
  return 0;
}
