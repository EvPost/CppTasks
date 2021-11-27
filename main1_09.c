//
//  main.c
//  pr09
//
//  Created by Air on 07.09.2021.
//

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,C,S;
    scanf("%f %f", &a,&b);
    C=(a+b)/2;
    S=2/(1/a+1/b);
    printf("C=%f\n",C);
    printf("C=%e\n",C);
    printf("S=%f\n",S);
    printf("S=%e\n",S);
    return 0;
}
