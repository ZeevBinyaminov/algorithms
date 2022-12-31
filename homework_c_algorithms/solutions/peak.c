#include <stdio.h>

int array[] = {1, 2, 3, 4, 5, 3, 2, -5};

int less(unsigned long i, unsigned long j) {
  return (array[i] <= array[j]) ? 1 : 0;
}

unsigned long peak(unsigned long nel,
                   int (*less)(unsigned long i, unsigned long j)) {
  unsigned long l = 0, r = nel - 1, m;
  if (nel == 1) {
    return 0;
  } else if (nel == 2) {
    return less(0, 1);
  }
  for (int i = 0; i < nel; i++) {
    if (i == 0) {
      if (less(i + 1, i)) {
        return 0;
      }
    } else if (i == nel - 1) {
      if (less(i - 1, i)) {
        return nel - 1;
      }
    } else if (less(i - 1, i) && less(i + 1, i)) {
      return i;
    }
  }
  return -1;
}

int main(int argc, char **argv) {
  unsigned long i = peak(8, &less);
  if ((i == 0 || array[i] >= array[i - 1]) &&
      (i == 7 || array[i] >= array[i + 1])) {
    printf("CORRECT\n");
  } else {
    /* Если фунция peak работает правильно,
    сюда никогда не будет переведено
    управление! */
    printf("WRONG\n");
  }
  printf("%ld", i);
  return 0;
}