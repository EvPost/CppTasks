//
//  main.cpp
//  HW3.08
//
//  Created by Air on 02.10.2021.
//

#include <iostream>
#include <math.h>
#include <limits.h>

using namespace std;
int main()
{
    uint32_t a1,b1;
    printf("a\n");
    scanf("%d",&a1);
    printf("b\n");
    scanf("%d",&b1);
    if(a1 < abs(pow(2,32)-1 - b1))
    {
        printf("%d\n",a1+b1);
    }
    else
    {
        printf("переповнення\n");
    }
    int32_t a2,b2;
    printf("a\n");
    scanf("%d",&a2);
    printf("b\n");
    scanf("%d",&b2);
    if( abs(a2) < (pow(2,32)-1)/abs(b2))
    {
        printf("%d\n",a2+b2);
    }
    else
    {
        printf("переповнення\n");
    }
}
