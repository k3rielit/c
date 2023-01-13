// https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/c

#include <stdio.h>
#include <stdlib.h>

char *create_phone_number(char phnum[15], const unsigned char nums[10]);


int main() {
    char phnum[15] = {0};
    unsigned char nums[10] = {1,2,3,4,5,6,7,8,9,0};
    printf("%s",create_phone_number(phnum,nums));
    return 0;
}

// sprintf is overused
char *create_phone_number(char phnum[15], const unsigned char nums[10]) {
    const char* template = "(nnn) nnn-nnnn";
    for(int i=0, num_i=0; template[i]!=0 || num_i<10; i++) {
        if(template[i]=='n') {
            phnum[i]=nums[num_i]+48;
            num_i++;
        }
        else phnum[i]=template[i];
    }
    phnum[14]=0;
    return phnum;
}