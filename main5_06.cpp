//
//  main.cpp
//  CW6_5.06
//
//  Created by Air on 12.10.2021.
//

#include <iostream>

float task_a(int(n), float(b)){
    float b0=b;
    for (int i=0; i<n; i++){
        b0=b+1/b0;
    }
    return b0;
}

float task_b(int(n)){
    float b0=4*n+2;
    for (int i=0; i<n; i++){
        b0=4*(n-i)+1/b0;
    }
    return b0;
}

float task_c(int(n)){
    float b0=0;
    for (int i=0; i<n; i++){
        b0=1/(2+b0);
        b0=1/(1+b0);
    }
    return b0;
}



int main() {
    printf("%f\n", task_a(10, 3));
    printf("%f\n", task_b(10));
    printf("%f\n", task_c(10));
}
