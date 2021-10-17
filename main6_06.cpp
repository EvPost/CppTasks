//
//  main.cpp
//  CW8_6.06
//
//  Created by Air on 17.10.2021.
//

#include <iostream>
#include <limits.h>

unsigned f1(unsigned x){
    unsigned k=0,p=1;
    if(x==0) return 0;
    while (p<=x) {
        if(x%p==0){
            k++;
            p<<=1;
        }
        else break;
    }
    return p/2;
}

unsigned f2(unsigned x){
    unsigned k=0,p=1;
    while (p<=x) {
        if(x%p==0){
            k++;
            p<<=1;
        }
        else break;
    }
    return (p/2==x)?1:0;
}

int main() {
    unsigned x;
    for(x=0;x<UINT_MAX/2;++x){
        unsigned y=x&(x-1);
        unsigned z=x&(-x);
        //printf("%u - %u\n",z,f1(x));
        //printf("%u - %u\n",(y==0)?1:0,f2(x));
        //printf("x=%x y=%x z=%x\n",x,y,z);
    }
}
