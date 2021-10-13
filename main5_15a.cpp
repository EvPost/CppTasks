//
//  main.cpp
//  CW6_5.15a
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

double sinus(double x ){
    double s=0, a=10000;
    int q=1;
    for (int i=1; abs(a)>0.0000001; i=i+2){
        a=q*pow(x, i)/fakt(i);
        s=s+a;
        q=-q;
    }
    return s;
}

int main() {
    double x;
    printf("x=\n");
    scanf("%lf", &x);
    printf("%lf\n", sinus(x));
    printf("%lf\n", sin(x));
}
