//
//  main.cpp
//  CW13_10.04
//
//  Created by Air on 05.11.2021.
//

#include <iostream>

typedef struct {
int numerator;
unsigned int denominator;
} Rational;

int input(Rational* x){
    printf("Input nominator and denominator:\n");
    scanf("%d",&x->numerator);
    scanf("%u",&x->denominator);
    return  0;
}

void vyvod(const Rational x){
    printf("R= %d / %u\n", x.numerator, x.denominator);
}

Rational add(const Rational a, const Rational b){
    Rational c;
    c.numerator=(int)(a.numerator*b.denominator)+(int)(b.numerator*a.denominator);
    c.denominator=a.denominator*b.denominator;
    return c;
}

Rational mul(const Rational a, const Rational b){
    Rational c;
    c.numerator=a.numerator*b.numerator;
    c.denominator=a.denominator*b.denominator;
    return c;
}

bool cmp(const Rational a, const Rational b){
    return a.numerator*b.denominator > b.numerator*a.denominator;
}

unsigned gcd(unsigned a, unsigned b){
    if(a==0)return b;
    if(b==0)return a;
    if(a>b)return gcd(b,a%b);
    else return gcd(a,b%a);
}
    
Rational reducel(const Rational x){
    unsigned d;
    if(x.numerator>=0)d=gcd(x.numerator,x.denominator);
    else d=gcd(-x.numerator,x.denominator);
    Rational z;
    printf("%u",d);
    z.numerator=x.numerator/(int)d;
    z.denominator=x.denominator/d;
    return z;
}

int main() {
    Rational x,y,z;
    input(&x);
    vyvod(x);
    input(&y);
    vyvod(y);
    z=add(x,y);
    printf("sum=\n");
    vyvod(z);
    vyvod(reducel(z));
    Rational z1=mul(x,y);
    printf("mul=\n");
    vyvod(reducel(z1));
    printf("z>z1==%d\n", cmp(z,z1));
    
    return 0;
}
