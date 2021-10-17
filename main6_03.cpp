//
//  main.cpp
//  CW7_6.03
//
//  Created by Air on 13.10.2021.
//

#include <iostream>

int main() {
    unsigned long long m;
    unsigned j;
    printf("m=\n");
    scanf("%Lu", &m);
    printf("j=\n");
    scanf("%u", &j);
    m=m&~(1<<j);
    printf("m=%Lu\n %Lx\n",m,m);
}
