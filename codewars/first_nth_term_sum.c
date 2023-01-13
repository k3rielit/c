// https://www.codewars.com/kata/555eded1ad94b00403000071/train/c

#include <stdio.h>
#include <stdlib.h>

char *series_sum(const size_t n);


int main() {
    printf("1: %s\n",series_sum(1));
    printf("2: %s\n",series_sum(2));
    printf("5: %s\n",series_sum(5));
    return 0;
}

char *series_sum(const size_t n) {
    char *str = calloc(n+4,sizeof(char));
    double val=0, j=1;
    for(int i=0; i<n; i++, j+=3) val+=1/j;
    sprintf(str,"%.2lf",val);
    return str;
}