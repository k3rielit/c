// https://www.codewars.com/kata/563b662a59afc2b5120000c6/train/c

#include <stdio.h>
#include <stdlib.h>

void dotest(int p0, double percent, int aug, int p, int expr);
int nbYear(int p0, double percent, int aug, int p);


int main() {
    dotest(1500, 5, 100, 5000,15);
    dotest(1500000, 2.5, 10000, 2000000, 10);
    dotest(1500000, 0.25, 1000, 2000000, 94);
    return 0;
}

void dotest(int p0, double percent, int aug, int p, int expr) {
    int act = nbYear(p0, percent, aug, p);
    if(act != expr) printf("Expected %d, got %d\n", expr, act);
}

int nbYear(int p0, double percent, int aug, int p) {
    int year = 0;
    for(double perc=percent/100; ; p0+=p0*perc+aug, year++) if(p0>=p) break;
    return year;
}