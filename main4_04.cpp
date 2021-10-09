//
//  main.cpp
//  CW5_4.04
//
//  Created by Air on 08.10.2021.
//

#include <iostream>
#include <cmath>

int funk( int(x), int(n)){
    int s=0, f=1;
    for (int i=1; i<n+1; i=i+1){
        f=f*x;
        s=s+i*f;
    }
    return s;
}

int main() {
    int n;
    printf("n=\n");
    scanf("%d", &n);
    printf("%d\n", funk(2,n));
}
