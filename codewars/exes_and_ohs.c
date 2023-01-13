// https://www.codewars.com/kata/55908aad6620c066bc00002a/train/c

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TESTCOUNT 6

typedef struct Testcase {
    char *str;
    bool expected;
} Testcase;

bool xo(const char* str);


int main() {
    Testcase tests[] = {
        {"xo",true},
        {"Xo",true},
        {"xxOo",true},
        {"xxxm",false},
        {"Oo",false},
        {"ooom",false},
    };
    for(int i=0; i<TESTCOUNT; i++) printf("string:'%s' expected:%s got:%s\n", tests[i].str, (tests[i].expected ? "true" : "false"), (xo(tests[i].str) ? "true" : "false"));
    return 0;
}


bool xo(const char* str) {
    int x=0, o=0, i=0;
    for(; str[i]!=0; i++) {
        x += str[i]=='x' || str[i]=='X';
        o += str[i]=='o' || str[i]=='O';
    }
    return x==o;
}
