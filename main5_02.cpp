//
//  main.cpp
//  CW6_5.02
//
//  Created by Air on 11.10.2021.
//

#include <iostream>
#include <cmath>

int fib_a(int n){
    int f0=0,f1=1,fk=0;
    for (int i=0;i+1<n;i++){
        fk=f0+f1;
        f0=f1;
        f1=fk;
    }
    return fk;
}

int fib_b(int a){
    int k=0,f0=0,f1=1,fk;
    while (f1<a){
        k++;
        fk=f0+f1;
        f0=f1;
        f1=fk;
    }
    return k;
}

int fib_v(int a){
    return fib_b(a)+1;
}

int sumfib_g(int a){
    int s=1,f0=0,f1=1,fk;
    while (f1<a){
        fk=f0+f1;
        f0=f1;
        f1=fk;
        s=s+fk;
    }
    return s;
}


int main() {
    printf("%d\n", fib_a(10));
    printf("%d\n", fib_b(60));
    printf("%d\n", fib_v(60));
    printf("%d\n", sumfib_g(1000));
}
