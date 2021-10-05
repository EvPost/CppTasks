//
//  main.cpp
//  CW4_3.06
//
//  Created by Air on 03.10.2021.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
   float x,y,z;
    printf("x y z\n");
    scanf("%g %g %g", &x, &y, &z);
    if (abs(x)>=abs(y) and abs(x)>=abs(z)){
        printf("max=%g", x);
    }
    else if ((abs(y)>=abs(x) and abs(y)>=abs(z))){
        printf("max=%g", y);
    }
    else if ((abs(z)>=abs(x) and abs(z)>=abs(y))){
        printf("max=%g", z);
    }
    if (abs(x)<=abs(y) and abs(x)<=abs(z)){
        printf("min=%g", x);
    }
    else if ((abs(y)<=abs(x) and abs(y)<=abs(z))){
        printf("min=%g", y);
    }
    else if ((abs(z)<=abs(x) and abs(z)<=abs(y))){
        printf("min=%g", z);
    }
}
