//
//  main.cpp
//  CW1.07
//
//  Created by Air on 11.09.2021.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf",&x);
    int z1=(int)x;
    if(x<0){
        z1=z1-1;
    }
    printf("z1=%d\n",z1);
    double fp=x-z1;
    printf("fp=%lf\n",fp);
    int z2 =int(x);
    if(x>0){
        if(fp>0)
            z2=z2+1;
    }
    printf("z2=%d\n",z2);
    int z3=z2-1;
    printf("z3=%d\n",z3);
    z1=floor(x);
    z2=ceil(x);
    z3=round(x);
    fp=x-z1;
    printf("[%lf]=%d, ]%lf[=%d, round=%d, fp=%lf\n",x,z1,x,z2,z3,fp);
}
