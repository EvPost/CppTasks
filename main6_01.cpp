//
//  main.cpp
//  CW7_6.01
//
//  Created by Air on 13.10.2021.
//

#include <iostream>

int main() {
    unsigned char n;
    unsigned long long m;
    printf("n=\n");
    scanf("%hhu", &n);
    
    m=1<<n;
    printf("m=%Lu\n",m);
}
