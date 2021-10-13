//
//  main.cpp
//  HW6_5.16g
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

int main() {
    double x, e;
    printf("x=\n");
    scanf("%lf", &x);
    printf("e=\n");
    scanf("%lf", &e);
    double s=0, a=100000;
    int i=0;
    for (int k=0; abs(a)>e; k++){
        a=pow(-1, k)*pow(x,2*k+1)/(fakt(k)*fakt(2*k+1));
        s=s+a;
        i++;
    }
    printf("sum=%f\n", s);
    printf("k=%d\n", i);
}
