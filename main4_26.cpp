//
//  main.cpp
//  HW5_4.26
//
//  Created by Air on 09.10.2021.
//

#include <iostream>
#include <cmath>

int funk( int(n), int(m)){
    int x=1;
    for (int i=1; i<m+1; i=i+1){
        if (abs(n)%i==0 and m%i==0) x=i;
    }
    return x;
}

int main() {
    int n, m;
    printf("n/m=\n");
    scanf("%d/%d", &n,&m);
    printf("%d/%d \n", n/funk(n,m), m/funk(n,m));
}
