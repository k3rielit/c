// https://www.codewars.com/kata/576757b1df89ecf5bd00073b/train/c

#include <stdio.h>
#include <stdlib.h>

#define N 6

void build_tower(unsigned n, char tower[N][2 * N - 1]);


int main() {
    char tower[N][2 * N - 1] = {0};
    build_tower(N,tower);
    for(unsigned int row=0; row<N; row++) {
        for(unsigned int col=0; col<2*N-1; col++) printf("%c",tower[row][col]);
        printf("\n");
    }
    return 0;
}


void build_tower(unsigned n, char tower[N][2 * N - 1]) {
    for(unsigned int row=0, col_len = 2*n-1; row<n; row++) {
        for(unsigned int col=0; col<col_len; col++) tower[row][col]=' ';
        for(unsigned int col=n-row-1; col<n+row; col++) tower[row][col]='*';
        tower[row][col_len]=0;
    }
}