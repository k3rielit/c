// https://www.codewars.com/kata/558fc85d8fd1938afb000014/train/c

#include <stdio.h>
#include <stdlib.h>

#define N 5

#ifndef INT_MAX
#define INT_MAX 2147483647
#endif

long sum_two_smallest_numbers(size_t n, const int numbers[N]);


int main() {
    const int numbers[N] = {19, 5, 42, 2, 77};
    printf("%ld",sum_two_smallest_numbers(N,numbers));
    return 0;
}

long sum_two_smallest_numbers(size_t n, const int numbers[N]) {
    long smallest = numbers[0], smallest_i = 0, small=INT_MAX;
    for(int i=1; i<n; i++) {
        if(numbers[i]<smallest) {
            smallest=numbers[i];
            smallest_i=i;
        }
    }
    for(int j=0; j<n; j++) if(numbers[j]<small && j!=smallest_i) small=numbers[j];
    return smallest+small;
}