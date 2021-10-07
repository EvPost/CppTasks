//
//  main.cpp
//  HW4_3.23g
//
//  Created by Air on 07.10.2021.
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
double eReLu(double a, double x)
{
    if (x<0) return a*(exp(x)-1);
    return 0;
}
double eReLu_derivative(double a, double x)
{
    if (isNearlyZero(x)) return 0;
    else if (x<0){
        return a*exp(x);
    }
    return 0;
}
int main() {
    printf ("%lf\n",eReLu(1,-5));
    printf ("%lf\n",eReLu_derivative(1,-5));
    return 0;
}
