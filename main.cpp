//
//  main.cpp
//  HW2.07
//
//  Created by Air on 11.09.2021.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
    float x1,y1,x2,y2,x3,y3,x4,y4,q;
    printf("first radius coordinates\n");
    printf("x1=\n");
    scanf("%f", &x1);
    printf("y1=\n");
    scanf("%f", &y1);
    printf("x2=\n");
    scanf("%f", &x2);
    printf("y2=\n");
    scanf("%f", &y2);
    printf("second radius coordinates\n");
    printf("x3=\n");
    scanf("%f", &x3);
    printf("y3=\n");
    scanf("%f", &y3);
    printf("x4=\n");
    scanf("%f", &x4);
    printf("y4=\n");
    scanf("%f", &y4);
    q=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))*sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
    printf("S=%f",q*M_PI/4);
    return 0;
}
