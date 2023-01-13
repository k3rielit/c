// https://www.codewars.com/kata/551f37452ff852b7bd000139/train/c

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ullong;

char *binary_add (unsigned a, unsigned b, char *binary);


int main() {
    char bin[256];
    unsigned a = UINT_MAX, b = UINT_MAX; // (UINT_MAX = 4294967295)
    printf("%u + %u = %s\n",a,b,binary_add(a,b,bin));
    return 0;
}

char *binary_add (unsigned a, unsigned b, char *binary) {
    unsigned len=0, i=0, rem = 0;
    ullong sum = (ullong)a + (ullong)b;
    char tmp = 0;
    // convert to binary backwards
    for(; sum>0 || len==0; len++) {
        rem = sum%2;
        sum = (sum-rem)/2;
        binary[len] = (rem) + 48;
    }
    binary[len]=0;
    // reverse string
    for(; i<len/2; i++) {
        tmp = binary[i];
        binary[i] = binary[len-i-1];
        binary[len-i-1] = tmp;
    }
	return binary;
}