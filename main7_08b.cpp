//
//  main.cpp
//  HW9_7_08b
//
//  Created by Air on 24.10.2021.
//

#include <iostream>
#include <math.h>
#define N 100

int main() {
    int n;
    int mas[N];
    printf("N=");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        printf("mas[%d]=", i);
        scanf("%d", &mas[i]);
    }
    int k=0;
    for (int i=0; i<n; i++){
        if (cbrt(mas[i]%2==0)){
            k++;
        }
    }
    printf("k=%d\n", k);
}
