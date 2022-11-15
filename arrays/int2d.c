#include <stdio.h>
#include <stdlib.h>

#define ROW 10
#define COL 10

int** Int2D(int r, int c);


int main() {
    int** table = Int2D(ROW,COL);
    for(int row=0; row<ROW; row++) {
        for(int col=0; col<COL; col++) {
            printf("%d ",table[row][col]);
        }
        printf("\n");
    }
    free(table);
    return 0;
}


int** Int2D(int r, int c) {
    int** p = malloc(sizeof(int*)*r);
    for(int row=0; row<r; row++) {
        p[row] = malloc(sizeof(int*)*c);
        for(int col=0; col<c; col++) {
            p[row][col] = (row+1)*(col+1);
        }
    }
    return p;
}