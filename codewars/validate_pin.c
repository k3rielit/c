// https://www.codewars.com/kata/55f8a9c06c018a0d6e000132/train/c

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validate_pin(const char *pin);


int main() {
    validate_pin("a234");
    validate_pin("1234");
    validate_pin("12345");
    return 0;
}


bool validate_pin(const char *pin) {
    int i=0;
    for(; pin[i]!=0; i++) if(pin[i]<'0' || pin[i]>'9') return false;
    return i==4 || i==6;
}
