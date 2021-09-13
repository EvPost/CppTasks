//
//  main.cpp
//  CW2.03
//
//  Created by Air on 11.09.2021.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,p;
    printf("a=\n");
    scanf("%f", &a);
    printf("b=\n");
    scanf("%f", &b);
    printf("c=\n");
    scanf("%f", &c);
    p=(a+b+c)/2;
    printf("S=%f",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}
