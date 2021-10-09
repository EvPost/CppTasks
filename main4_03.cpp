//
//  main.cpp
//  CW5_4.03
//
//  Created by Air on 07.10.2021.
//

#include <iostream>
#include <cmath>

int funk1( int(x), int(n)){
    int s=1, f=1;
    for (int i=0; i<n; i=i+1){
        f=f*x;
        s=s+f;
    }
    return s;
}

int funk2( int(x), int(y), int(n)){
    int s=1, f=1, q=x*x;
    for (int i=0; i<n; i=i+1){
        f=f*y;
        s=s+f*q;
        q=q*q;
    }
    return s;
}

int main() {
    printf("%d\n", funk1(2,3));
    printf("%d\n", funk2(1,2,4));
}
