#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct params {
  int height;
  int width;
  char *text;
} params;

int read_params(struct params *values, char **argv) {
  values->height = atoi(argv[1]);
  values->width = atoi(argv[2]);
  values->text = argv[3];
  return values->width - 2 >= (int)strlen(values->text);
}

void create_frame(params parameters) {
  int slen = strlen(parameters.text);
  int x_center = parameters.width - 2 - slen;
  x_center = x_center / 2 + x_center % 2;
  int y_center = parameters.height / 2 - 1;
  for (int i = 0; i < parameters.height; i++) {
    for (int j = 0; j < parameters.width; j++) {
      if (i == 0 || i == parameters.height - 1) {
        printf("*");
      }

      else if ((i == y_center) && (j == x_center)) {
        printf("%s", parameters.text);
      } else if ((i == y_center) && (j > x_center && j < x_center + slen))
        ;

      else {
        if ((j == 0 || j == parameters.width - 1)) {
          printf("*");
        } else {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
}

int main(int argc, char **argv) {
  params values;
  if (!read_params(&values, argv)) {
    printf("Error");
  } else {
    create_frame(values);
  }
  return 0;
}
