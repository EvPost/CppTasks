//
//  main.cpp
//  CW5_4.08
//
//  Created by Air on 09.10.2021.
//

#include <iostream>
#include <cmath>

int funk( int(m)){
    int s, k;
    s=4;
    k=1;
    while ((s*4)<=m){
        k=k+1;
        s=s*4;
    }
    return k;
}
int main() {
    int m;
    do{
        printf("m=\n");
        scanf("%d", &m);
      } while(m<1);
    printf("%d\n", funk(m));
}
