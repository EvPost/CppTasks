//
//  main.cpp
//  CW5_4.01
//
//  Created by Air on 07.10.2021.
//

#include <iostream>
#include <cmath>

float funk( float(x), int(n)){
    for (int i=0; i<n; i=i+1){
        x=sin(x);
    }
    return x;
}
int main() {
    float x;
    int n;
    printf("x=\n");
    scanf("%f", &x);
    printf("n=\n");
    scanf("%d", &n);
    printf("%f", funk(x,n));
}
