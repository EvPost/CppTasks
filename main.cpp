//
//  main.cpp
//  pr5
//
//  Created by Air on 06.09.2021.
//

#include <iostream>
#include <stdio.h>

int main() {
    // insert code here...
    float x,y,z,l,q,q1,w,w1;
    std::cout<<"x=";
       std::cin>>x;
    y=x*x;
    z=y*y;
    l=z*z;
    q=l*l;
    q1=q/x;
    printf ("%f       ",q1);
    
    w=q*q;
    w1=w*y;
    printf ("%f",w1);
    return 0;
}
