//
//  main.cpp
//  CW10_8.07
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

int max_col(int row[],int m){
    int max_el=row[0];
    int k=0;
    for(int  i=0; i<m; i++){
        if (max_el<row[i]){
            max_el=row[i];
            k=i;
        }
    }
    return k;
}

void gauss(int matr[][M], int n, int m){
    for(int i=0; i<n; ++i){
        int k=max_col(matr[i],m);
        if(k==i) continue;
        printf("%d\n",k);
        for(int j=i; j<n; j++){
            int tmp=matr[j][k];
            matr[j][k]=matr[j][i];
            matr[j][i]=tmp;
        }
    }
}

int main() {
    int n,m;
    do{
        printf("n=");
        scanf("%d",&n);
      } while(n>100);
    do{
        printf("m=");
        scanf("%d",&m);
      } while(m>100);
    int matr[N][M];
    vvod(matr,n,m);
    vyvod(matr,n,m);
    gauss(matr,n,m);
    printf("\n");
    vyvod(matr,n,m);
}

