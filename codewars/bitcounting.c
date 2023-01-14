// https://www.codewars.com/kata/526571aae218b8ee490006f4/train/c

#include <stdio.h>
#include <stdlib.h>

size_t countBits(unsigned value);


int main() {
    printf("1234: %d\n",countBits(1234));
    return 0;
}


size_t countBits(unsigned value) {
    size_t vsize = 0;
    for(; value; vsize += 1 & value, value >>= 1);
    return vsize;
}

/*
Count bits while right shifting the number until it
has bits left, and checking if the last bit is set.

1234:
   10011010010 & 00000000001 = 0 \
>> 01001101001 & 00000000001 = 1  |
>> 00100110100 & 00000000001 = 0  |
>> 00010011010 & 00000000001 = 0  |
>> 00001001101 & 00000000001 = 1  \
>> 00000100110 & 00000000001 = 0   \ = 5
>> 00000010011 & 00000000001 = 1   /
>> 00000001001 & 00000000001 = 1  /
>> 00000000100 & 00000000001 = 0  |
>> 00000000010 & 00000000001 = 0  |
>> 00000000001 & 00000000001 = 1  |
>> 00000000000 & 00000000001 = 0 /
*/