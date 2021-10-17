//
//  main.cpp
//  CW7_5.7
//
//  Created by Air on 13.10.2021.
//

#include <iostream>
#include <math.h>

float sumn(int(n)){
    int a1=0, a2=1, ak, b1=1, b2=0, bk;
    float s=6;
    for (int k=3; k<=n; k++){
        bk=b2+a2;
        ak=a2/k+a1*bk;
        s=s+pow(2, k)/(ak+bk);
        a1=a2;
        a2=ak;
        b1=b2;
        b2=bk;
    }
    return s;
}



int main() {
    int n;
    printf("n=\n");
    scanf("%d", &n);
    printf("%f\n", sumn(n));
}
