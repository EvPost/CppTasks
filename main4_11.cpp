//
//  main.cpp
//  CW5_4.11
//
//  Created by Air on 09.10.2021.
//

#include <iostream>

int main() {
    int x;
    int i=0;
    double mean=0, harm=0;
    do{
        printf("a[%d]=",i);
        scanf("%d",&x);
        mean=mean+x;
        if (x==0) break;
        harm=harm+1.0/x;
        i=i+1;
      } while(x!=0);
    printf("%lf\n %lf",mean/i,i/harm);
}
