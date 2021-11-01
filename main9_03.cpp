//
//  main.cpp
//  CW11_9.03
//
//  Created by Air on 30.10.2021.
//

#include <iostream>
#include <stdlib.h>

double* vect(int n){
    double* a=(double*) malloc(n*sizeof(double));
    return a;
}

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

double* dif(double* v1, int n1, double* v2, int n2){
    double* res=NULL;
    if (n1==n2){
        res=(double*) malloc(n1*sizeof(double));
        if(!res) return NULL;
        for (int i=0; i<n1; i++){
            res[i]=v1[i]-v2[i];
        }
        return res;
    }
    return res;
}

void print(double* v, int n){
    printf("\n");
    for (int i=0; i<n; i++){
        printf("a[%d]=%lf", i, v[i]);
    }
}

void delet(double* v){
    free(v);
}

int main() {
    
    int n1,n2;
    printf("n=");
    scanf("%d",&n1);
    double* v1=vect(n1);
    if (v1==NULL) return -1;
    input(v1, n1);
    
    printf("n=");
    scanf("%d",&n2);
    double* v2=vect(n2);
    if (v2==NULL){
        delet(v1);
        return -2;
        
    }
    input(v2, n2);
    double * v3;
    v3=dif(v1, n1, v2, n2);
    if(v3){
        print(v3,n1);
        delete (v3);
    }
    else{
        printf("n1<>n2 - no differnce can be calculated");
    }
    delet(v2);
    delet(v1);
    return 0;
}
