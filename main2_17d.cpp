//
//  main.cpp
//  HW2.17
//
//  Created by Air on 30.09.2021.
//

#include <iostream>
#include <cmath>
float gauss(float x)
{
    return exp(-(x*x));
}
float identity_gauss(float x)
{
    return -2*x*exp(-(x*x));
}
int main() {
    printf ("%f\n",gauss(1));
    printf ("%f\n",identity_gauss(1));
    return 0;
}
