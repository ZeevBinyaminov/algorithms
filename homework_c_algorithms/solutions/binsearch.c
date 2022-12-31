#include <stdio.h>

int array[] = {1, 2, 30, 45, 50, 51, 55, 60};
const int k = 51;

int compare(unsigned long i) {
  if (array[i] == k)
    return 0;
  if (array[i] < k)
    return -1;
  return 1;
}

unsigned long binsearch(unsigned long nel, int (*compare)(unsigned long i)) {
  int low, high, middle, comp_res;
  low = 0;
  high = nel - 1;
  while (low <= high) {
    middle = (high + low) / 2;
    comp_res = compare(middle);
    if (comp_res == 0) {
      return middle;
    } else if (comp_res == 1) {
      high = middle - 1;
    } else {
      low = middle + 1;
    }
  }
  return nel;
}

int main(int argc, char **argv) {
  printf("%lu\n", binsearch(8, compare));
  return 0;
}
