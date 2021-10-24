//
//  main.cpp
//  CW9_7.01
//
//  Created by Air on 21.10.2021.
//
#include <iostream>
#define N 5

int main(){
    int mas[] = {1,2,3,4,5};
    double b;
    printf("b=\n");
    scanf("%lf", &b);
    int k=0;
    for (int i=0 ; i<N; i++ ) {
        if (mas[i]<b) k++;
    }
    printf("k=%d\n",k);
}

