//
//  main.cpp
//  CW9_7.05
//
//  Created by Air on 21.10.2021.
//

#include <iostream>

#define N 5

int main(){
    int mas[N];
    for (int i=0; i<N; i++){
        printf("a[%d]=", i);
        scanf("%d", &mas[i]);
    }
    int par=0, nepar=0;
    for (int i=0; i<N; i++){
        if(i%2==0) par=par+mas[i];
        else nepar=nepar+mas[i];
    }
    printf("par=%d\nnepar=%d",par, nepar);
}
