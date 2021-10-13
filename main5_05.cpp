//
//  main.cpp
//  CW6_5.05
//
//  Created by Air on 12.10.2021.
//

#include <iostream>

int main() {
    int x0=-99, x1=-99, x2=-99,x;
    int k=2;
    while (x2<0) {
        x=x0+x2+100;
        k++;
        x0=x1;
        x1=x2;
        x2=x;
    }
    printf("x[%d]=%d",k,x2);
}
