unsigned long peak(unsigned long nel, int (*less)(unsigned long i, unsigned long j));

unsigned long peak(unsigned long nel, int (*less)(unsigned long i, unsigned long j)) {
    unsigned long l = 0, r = nel - 1, m;
    for (;l < r;) {
        m = (l / 2 + r / 2);
        if (less(m, m + 1)) {
            l = m + 1;
        } else if (less(m, m - 1)) {
            r = m - 1;
        } else {
            return m;
        }
    }
    return l;
}

