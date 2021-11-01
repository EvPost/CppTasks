//
//  main.cpp
//  CW11_9.01
//
//  Created by Air on 29.10.2021.
//

#include <iostream>
#include <stdlib.h>

double sum_sq(double* a, int size){
    double s=0;
    for (int i=0; i<size; i++){
        s=s+a[i]*a[i];
    }
    return s;
}

int input(double * a, int size){
    for (int i=0; i<size; i++){
        printf("a[%d]=", i);
        scanf("%lf", &a[i]);
    }
    return 0;
}

int main() {
    
    int n;
    printf("n=");
    scanf("%d",&n);
    double* a=(double*) malloc(n*sizeof(double));
    
    if(!a){
        printf("no memory allocated, exit");
    }
    input(a, n);
    
    double s=sum_sq(a,n);
    printf("s=%lf", s);
    free(a);
    return 0;
}
