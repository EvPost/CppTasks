//
//  main.cpp
//  CW10_8.02
//
//  Created by Air on 24.10.2021.
//

#include <iostream>
#define N 3

void vyvod(int matr[N][N]){
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            printf("%d, ",matr[i][j]);
        }
        printf("\n");
    }
}

void chan(int matr[N][N], int i, int j, int a){
    if (i<N and j<N) matr[i][j]=a;
}

int main() {
    int matr[N][N]={{1,2,3},{4,5,6},{7,8,9}};
    vyvod(matr);
    int i,j,a;
    printf("i=");
    scanf("%d",&i);
    printf("j=");
    scanf("%d",&j);
    printf("a=");
    scanf("%d",&a);
    chan(matr,i, j, a);
    printf("\n");
    vyvod(matr);
}
