
unsigned long binsearch(unsigned long nel, int (*compare)(unsigned long i)) {
    int low, high, middle, guess, comp_res;
    low = 0;
    high = nel - 1;
    while (low <= high) {
       middle = (high + low) / 2;
       comp_res = compare(middle);
       if (comp_res == 0) {
           return middle;
       } else if (comp_res == 1) {
           high = middle - 1;
       } else  {
           low = middle + 1;
       }
    }
    return nel;
}