//
//  main.cpp
//  CW10_8.03
//
//  Created by Air on 24.10.2021.
//

#include <iostream>
#define N 20
#define M 20

void vvod_ts3(int matr[N][M], unsigned n, unsigned m){
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            printf("\na[%u][%u]=",i,j);
            scanf("%d", &matr[i][j]);
        }
    }
}

void vyvod(int matr[N][N], unsigned n, unsigned m){
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            printf("%d, ",matr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matr[N][M];
    int n,m;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    vvod_ts3(matr, n, m);
    vyvod(matr, n, m);
    
}
