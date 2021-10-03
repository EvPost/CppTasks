//
//  main.cpp
//  CW4_3.07B
//
//  Created by Air on 03.10.2021.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

bool isNearlyZero(double x){
    return abs(x)<0.000001;
}

bool isNearlyEqual(double x, double y){
    return abs(x-y)<= DBL_EPSILON*2*(abs(x)+abs(y));
}

int main() {
    double a,b,c,D,x1,x2;
    printf("a b c \n");
    scanf("%lf %lf %lf",&a, &b, &c);
    
    if(isNearlyZero(a)){
        if(isNearlyZero(a)){
            if(isNearlyZero(a)){
                printf("All real numbers\n");
                return 0;
            }
            printf("No solutions \n");
            return 0;
        }
        else{
            x1=-c/b;
            printf("Only solution x1=%lf \n",x1);
        }
        return 0;
    }
    D=b*b-4*a*c;
    if(isNearlyZero(D)){
        x1=-b/(2*a);
        printf("Only solution x1=%lf \n",x1);
    }
    else if(D>0){
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("Two solutions %lf and %lf \n",x1,x2);
    }
    else{
        printf("No solutions \n");
    }
}

