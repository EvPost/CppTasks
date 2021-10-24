//
//  main.cpp
//  CW9_7.03
//
//  Created by Air on 21.10.2021.
//

#include <iostream>
#include <math.h>

#define N 10

int main(){
    double mas[N];
    for (int i=0; i<N; i++){
        printf("a[%d]=", i);
        scanf("%lf", &mas[i]);
    }
    double sum=0;
    for (int i=0; i<N; i++){
        if(mas[i]>M_E) sum=sum+mas[i];
    }
    printf("sum=%lf\n",sum);
}

