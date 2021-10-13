//
//  main.cpp
//  CW6_5.03
//
//  Created by Air on 12.10.2021.
//

#include <iostream>
 
int mmax(int m){
    unsigned nmax=0, km, n;
    for(n=1; n<m; n++){
        unsigned a0=n, a1=a0;
        int k=0;
        while (a1!=1) {
            if(a0%2){
                a1=3*a0+1;
            }
            else{
                a1=a0/2;
            }
            a0=a1;
            k++;
        }
        if(k>nmax){
            nmax=k;
            km=n;
        }
    }
    return km;
}

int main() {
    unsigned n;
    printf("n=\n");
    scanf("%u", &n);
    
    unsigned a0=n, a1=a0;
    int k=0;
    while (a1!=1) {
        if(a0%2){
            a1=3*a0+1;
        }
        else{
            a1=a0/2;
        }
        a0=a1;
        k++;
        printf("koblits[%d]=%u\n",k,a0);
    }
    printf("k=%d\n", k);
    printf("mmax=%d\n", mmax(1000));
}
