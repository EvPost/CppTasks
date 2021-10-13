//
//  main.cpp
//  CW6_5.01
//
//  Created by Air on 11.10.2021.
//

#include <iostream>
#include <cmath>

double sumpra(double a){
    int i=1;
    double s=0.0;
    while (s<a){
        s=s+1.0/i;
        i=i+1;
    }
    return s;
}

int sumprb(double a){
    int i=1;
    double s=0.0;
    while (s<a){
        s=s+1.0/i;
        i=i+1;
    }
    return i;
}

int main() {
    double a;
    printf("a=\n");
    scanf("%lf", &a);
    printf("%lf\n", sumpra(a));
    printf("%d\n", sumprb(a));
}
