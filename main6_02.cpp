//
//  main.cpp
//  CW7_6.02
//
//  Created by Air on 13.10.2021.
//

#include <iostream>

int main() {
    unsigned n, k;
    printf("n=\n");
    scanf("%u", &n);
    printf("k=\n");
    scanf("%u", &k);
    n=n|(1<<k);
    printf("m=%u\n",n);
}
