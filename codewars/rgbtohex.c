// https://www.codewars.com/kata/513e08acc600c94f01000001/train/c

#include <stdio.h>
#include <stdlib.h>

int rgb(int r, int g, int b, char *output);

int main() {
    char output[7] = {0};
    rgb(42,37,31,output);
    printf("%s\n",output);
    rgb(0,0,0,output);
    printf("%s\n",output);
    rgb(900,800,700,output);
    printf("%s\n",output);
    rgb(-1,-2,-3,output);
    printf("%s\n",output);
    return 0;
}


int rgb(int r, int g, int b, char *output) {
    unsigned char rgb[3] = {(r<0?0:(r>255?255:r)), (g<0?0:(g>255?255:g)), (b<0?0:(b>255?255:b))};
    for(int z=0; z<6; z++) output[z]='0';
    for(int i=0, offset=0; i<3; i++, offset+=2) { // chaos
        for(unsigned char rem=0, n=offset+1; rgb[i]>0; rem=rgb[i]%16, rgb[i]=(rgb[i]-rem)/16, output[n]=(rem<10 ? rem+48 : rem+55), n--);
    }
    output[6]=0;
    return 0; 
}

/*
BETTER SOLUTIONS:
-------------------------------------------------------------
unsigned char wrap(int a) {
    if(a>255) return 255;
    else if(a<0) return 0;
    else return a;
}
int rgb(int r, int g, int b, char *output) {
    sprintf(output,"%02X%02X%02X\0",wrap(r),wrap(g),wrap(b));
    return 0; 
}
-------------------------------------------------------------
#define F( x ) x<0x00?0x00:x>0xFF?0xFF:x
int rgb(int r, int g, int b, char *o) {
    sprintf(o,"%02X%02X%02X",F(r),F(g),F(b));
    return 0; 
}
-------------------------------------------------------------
*/