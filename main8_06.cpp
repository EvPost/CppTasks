//
//  main.cpp
//  CW10_8.06
//
//  Created by Air on 28.10.2021.
//

#include <iostream>
#define N 100
#define M 100

void vyvod(int matr[N][M], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d, ",matr[i][j]);
        }
        printf("\n");
    }
}


void vvod(int matr[N][M], int n, int m){
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
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
    int n,m,k;
    do{
        printf("n=");
        scanf("%d",&n);
      } while(n>100);
    do{
        printf("m=");
        scanf("%d",&m);
      } while(m>100);
    printf("k=");
    scanf("%d",&k);
    int matr[N][M];
    vvod(matr,n,m);
    vyvod(matr,n,m);
    printf("%d\n",Sum_el(matr,n,m,k));
}
