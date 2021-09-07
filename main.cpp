//
//  main.cpp
//  pr4
//
//  Created by Air on 06.09.2021.
//

#include <iostream>
#include <cmath>
#include <stdio.h>
int main(){
    float m1, m2, r, f1, F;
 std::cout<<"m1=";
    std::cin>>m1;
    std::cout<<"m2=";
       std::cin>>m2;
    std::cout<<"r=";
       std::cin>>r;
    
    f1=6.673*10e-12;
    F=f1*m1*m2/(r*r);
    printf ("F=%f(%f*%f)/%f=%f", f1,m1,m2,r,F);
}

