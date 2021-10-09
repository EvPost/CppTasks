//
//  main.cpp
//  CW5_4.07
//
//  Created by Air on 08.10.2021.
//

#include <iostream>
#include <cmath>

float funk( int(n), float (x)){
    float s=1, q=1;
    for (int i=1; i<n; i=i+1){
        q=q*x/i;
        s=s+q;
    }
    return s;
}

int main() {
    int n;
    float x;
    do{
        printf("x=\n");
        scanf("%f", &x);
        printf("%f\n", abs(x));
      } while(abs(x)>=1);
    
    do{
        printf("n=\n");
        scanf("%d", &n);
      } while(n<0);
    printf("%f\n", funk(n, x));
}
