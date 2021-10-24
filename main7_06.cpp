//
//  main.cpp
//  CW9_7.06
//
//  Created by Air on 21.10.2021.
//

#include <iostream>
#include <stdlib.h>

#define N 20

int input(double mas[], int size){
    for (int i=0; i<size; i++){
        printf("mas[%d]=", i);
        scanf("%lf", &mas[i]);
    }
    return 0;
}

int output(const double mas[], int size){
    for (int i=0; i<size; ++i){
        printf("mas[%d]=%lf \n", i, mas[i]);
    }
    return 0;
}

int scal_sum(const double mas1[], const double mas2[], double mas3[], int size){
    for (int i=0; i<size; i++){
        mas3[i]=mas1[i]+mas2[i];
    }
    return 0;
}

int scal_mult(const double mas1[], const double mas2[], int size){
    double a;
    for (int i=0; i<size; i++){
        a=a+mas1[i]*mas2[i];
    }
    return a;
}




int main() {
    
    double mas1[N];
    double mas2[N];
    double mas3[N];
    unsigned n;
    double dob;
    do{
        printf("N=");
        scanf("%u",&n);
    }while (n==0|| n>20);
    input(mas1, n);
    input(mas2, n);
    dob=scal_mult(mas1, mas2, n);
    scal_sum(mas1, mas2, mas3, n);
    printf("dobutok=%lf \n",dob);
    output(mas3, n);
    return 0;
}
