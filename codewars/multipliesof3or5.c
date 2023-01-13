// https://www.codewars.com/kata/514b92a657cdc65150000006/train/c

#include <stdio.h>
#include <stdlib.h>

int solution(int number);


int main() {
    printf("10: %d\n",solution(10));
    return 0;
}


int solution(int number) {
    int sum = 0;
    for(int i=3; i<number; i++) sum += !(i%3) || !(i%5) ? i : 0;
    return sum;
}