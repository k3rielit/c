#include <stdio.h>
#include <stdlib.h>

#define ROW 10
#define COL 10

typedef struct Int2D {
    int rows;
    int cols;
    int** table;
} Int2D;

Int2D getTable(int row, int col, int defaultValue);


int main() {
    Int2D int2d = getTable(ROW,COL,1);
    for(int row=0; row<int2d.rows; row++) {
        for(int col=0; col<int2d.cols; col++) {
            printf("%d ",int2d.table[row][col]);
        }
        printf("\n");
    }
    return 0;
}


Int2D getTable(int row, int col, int defaultValue) {
    Int2D int2d = {row,col,malloc(sizeof(int*)*row)};
    for(int r=0; r<row; r++) {
        int2d.table[r] = malloc(sizeof(int*)*col);
        for(int c=0; c<col; c++) {
            int2d.table[r][c] = defaultValue;
        }
    }
    return int2d;
}