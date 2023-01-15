// https://www.codewars.com/kata/55466989aeecab5aac00003e/train/c

#include <stdio.h>
#include <stdlib.h>

typedef struct Data {
    int *array;
    int sz;
} Data;

Data* sqInRect(int lng, int wdth);


int main() {
    Data *data = sqInRect(5,3);
    printf("sz:%d\n",data->sz);
    for(int i=0; i<data->sz; i++) {
        printf("%d,",data->array[i]);
    }
    printf("\n");
    return 0;
}


Data* sqInRect(int lng, int wdth) {
    const int maxsize = lng*wdth;
    Data* data = calloc(1,sizeof(Data));
    data->array = calloc(maxsize,sizeof(int));
    if(lng==wdth) return data;
    for(int i=0; i<maxsize && lng>0 && wdth>0; i++, data->sz=i) {
        if(lng>wdth) {
            data->array[i] = wdth;
            lng -= wdth;
        }
        else if(wdth>lng) {
            data->array[i] = lng;
            wdth -= lng;
        }
        else {
            data->array[i] = lng;
            wdth = 0;
            lng = 0;
        }
    }
    return data;
}