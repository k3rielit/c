// https://www.codewars.com/kata/55f2b110f61eb01779000053/train/c

#include <stdio.h>
#include <stdlib.h>

int get_sum(int a , int b);


int main() {
    get_sum(-1, 2);
    get_sum(2, -1);
    get_sum(5, 5);
    return 0;
}

int get_sum(int a , int b) {
    if(a==b) return a;
    int small = (a<=b?a:b), big = (b>=a?b:a), sum = small;
    for(; small<big; small++, sum+=small);
    return sum;
}