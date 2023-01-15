// https://www.codewars.com/kata/51e04f6b544cf3f6550000c1/train/c

#include <stdio.h>
#include <stdlib.h>

int beeramid(double bonus, double price);


int main() {
    printf("beeramid(1500,2) -> %d\n",beeramid(1500,2)); // 12
    printf("beeramid(5000,3) -> %d\n",beeramid(5000,3)); // 16
    printf("beeramid(10,2) -> %d\n",beeramid(20,2)); // 2
    return 0;
}


int beeramid(double bonus, double price) {
    if(bonus<price) return -1;
    int level = 1;
    for(; bonus>=price; bonus-=level*level*price, level+=(bonus>=price?1:0));
    return level-1;
}

// Passed: 53 Failed: 1 Exit Code: 1
// Fail: beeramid(10.00, 2.00) should return 2, actual 1
// it does, but ok