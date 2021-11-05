//
//  main.cpp
//  CW12_10.01g
//
//  Created by Air on 02.11.2021.
//

#include <iostream>
#include <stdlib.h>

typedef struct Polynome{
    unsigned n;
    double* a;
}Polynome;

int inputPolynome(Polynome* p){
    printf("n=");
    scanf("%u",&p->n);
    p->a=(double*) malloc((p->n+1)*sizeof(*(p->a)));
    if(!p->a){
        printf("cannot allocate memory for polynome");
        return 0;
    }
    for (unsigned i=0; i<=p->n; ++i){
        printf("a[%u]=",i);
        scanf("%lf", &(p->a[i]));
    }
    return 1;
}

void printPolynome(Polynome* p){
    printf("P=");
    for (unsigned i=p->n; i>0; i--){
        printf("%g * x^%u +", p->a[i],i);
    }
    printf("%g\n",p->a[0]);
}

void deletePolynome(Polynome* p){
    free(p->a);
}

int main() {
    Polynome p;
    inputPolynome(&p);
    printPolynome(&p);
    deletePolynome(&p);
    return 0;
}
