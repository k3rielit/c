// https://www.codewars.com/kata/5502c9e7b3216ec63c0001aa/train/c

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define ARR_LEN(array) (sizeof(array) / sizeof(*(array)))
#define N 6

enum membership {OPEN = 1, SENIOR = 2};

void open_or_senior(size_t n, const int members[N][2], enum membership memberships[N]);


int main() {
    int members[][2] = {{18, 20}, {45, 2}, {61, 12}, {37, 6}, {21, 21}, {78, 9}};
    enum membership memberships[] = {OPEN,OPEN,OPEN,OPEN,OPEN,OPEN};
    open_or_senior(N,members,memberships);
    return 0;
}

void open_or_senior(size_t n, const int members[N][2], enum membership memberships[N]) {
    for(int i=0; i<n; i++) memberships[i] = members[i][0]>=55 && members[i][1]>7 ? SENIOR : OPEN;
}