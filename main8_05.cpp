//
//  main.cpp
//  CW10_8.05
//
//  Created by Air on 24.10.2021.
//

#include <iostream>
#define N 3

void vyvod(int matr[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d, ",matr[i][j]);
        }
        printf("\n");
    }
}


void vvod(int matr[N][N]){
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            printf("\na[%u][%u]=",i,j);
            scanf("%d", &matr[i][j]);
        }
    }
}

void transp(int matr[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++){
            int t=matr[i][j];
            matr[i][j]=matr[j][i];
            matr[j][i]=t;
        }
    }
}

int main() {
    int matr[N][N];
    vvod(matr);
    vyvod(matr);
    transp(matr);
    printf("\n");
    vyvod(matr);
}
