//
//  main.cpp
//  CW11_9.04
//
//  Created by Air on 30.10.2021.
//

#include <iostream>
#include <stdlib.h>

int* allocate_mat(int n){
    int* a=(int*) calloc(n*n, sizeof(int));
    return a;
}

int input_matrix(int* a, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("a[%d, %d]=", i, j);
            scanf("%d", &a[i*n+j]);
        }
    }
    return 1;
}

int output_matrix(int* a, int n){
    printf("\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d  ",a[i*n+j] );
        }
    printf("\n");
    }
    return 1;
}

void deallocate_matrix(int* a, int n){
    free(a);
}

int mult_matrix(int* matr1, int n1, int* matr2, int n2, int* matr3, int* n3){
    if(n1!=n2){
        *n3=n1;
        //matr3=allocate_mat(n1);
        return -1;
    }
    *n3=n1;
    //matr3=allocate_mat(n1);
    for (int i=0; i<n1; i++){
        for (int j=0; j<n1; j++){
            for (int k=0; k<n1; k++){
                matr3[i*n1+j]+=matr1[i*n1+k]*matr2[k*n1+j];
            }
        }
    }
    return 0;
    
}

int main() {
    int n;
    printf("n=");
    scanf("%d",&n);
    int * a1= allocate_mat(n);
    int * a2= allocate_mat(n);
    int * a3= allocate_mat(n);
    input_matrix(a1, n);
    input_matrix(a2, n);
    int m;
    mult_matrix(a1, n, a2, n, a3, &m);
    output_matrix(a3, m);
    deallocate_matrix(a1, n);
    deallocate_matrix(a2, n);
    deallocate_matrix(a3, m);
    return 0;
}
