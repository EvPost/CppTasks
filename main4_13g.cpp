//
//  main.cpp
//  HW5_4.13g
//
//  Created by Air on 09.10.2021.
//

#include <iostream>
#include <cmath>

int funk( int(x), int(n)){
    int s=1, f=1;
    for (int i=1; i<n; i=i+1){
        f=f*x;
        s=s+(i+1)*f;
    }
    return s;
}

int main() {
    int n, x;
    printf("x=\n");
    scanf("%d", &x);
    printf("n=\n");
    scanf("%d", &n);
    printf("%d\n", funk(x,n));
}
