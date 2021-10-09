//
//  main.cpp
//  CW5_4.09
//
//  Created by Air on 09.10.2021.
//

#include <iostream>
#include <cmath>


int funk( int(n)){
    int s, k;
    s=2;
    k=1;
    while ((s*2)<=n){
        k=k+1;
        s=s*2;
    }
    return k+1;
}

int main() {
    int n;
    printf("n=\n");
    scanf("%d", &n);
    printf("2^%d\n", funk(n));
}
