//
//  main.cpp
//  CW6_5.04
//
//  Created by Air on 12.10.2021.
//

#include <iostream>

int fakt1(int(n)){
    int x=1;
    for (int i=1; i<n+1; i=i+1){
        x=x*i;
    }
    return x;
}

float taska(int n){
    float p=1.0;
    for (int i=1; i<=n; i++){
        p=p*(1.0+(1.0/fakt1(i)));
    }
    return p;
}

float taskb(int n){
    float p=1.0;
    for (int i=1; i<=n; i++){
        if (i%2==0){
            p=p*(1.0+1.0/(i*i));
        }
        else{
            p=p*(1.0+1.0/(i*i));
        }
    }
    return p;
}

int main() {
    int n;
    printf("n=\n");
    scanf("%d", &n);
    printf("%f\n", taska(n));
    printf("%f\n", taskb(n));
}
