//
//  main.cpp
//  HW6_5.11b
//
//  Created by Air on 12.10.2021.
//

#include <iostream>
#include <math.h>

int fakt(int(n)){
    int x=1;
    for (int i=n; i>0; i=i-1){
        x=x*i;
    }
    return x;
}

float sumn(int(n),float(u), float(v)){
    float a1=u, ak, b1=v, bk;
    float s=u*v/2;
    for (int k=2; k<=n; k++){
        ak=2*b1+a1;
        bk=2*a1*a1+b1;
        s=s+(ak*bk)/fakt(k+1);
        a1=ak;
        b1=bk;
    }
    return s;
}



int main() {
    int n;
    float u,v;
    printf("n=\n");
    scanf("%d", &n);
    printf("u v\n");
    scanf("%f %f", &u,&v);
    printf("%f\n", sumn(n,u,v));
}
