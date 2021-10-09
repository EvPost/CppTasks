//
//  main.cpp
//  CW5_4.06
//
//  Created by Air on 08.10.2021.
//

#include <iostream>
#include <cmath>

float funk1( int(n)){
    float x=sqrt(2);
    for (int i=0; i<n-1; i=i+1){
        x=sqrt(2+x);
    }
    return x;
}

float funk2( int(n)){
    float x=0;
    for (int i=3*n; i>0; i=i-3){
        x=sqrt(i+x);
    }
    return x;
}
int main() {
    int n;
    printf("n=\n");
    scanf("%d", &n);
    printf("%f\n", funk1(n));
    printf("%f\n", funk2(n));
}
