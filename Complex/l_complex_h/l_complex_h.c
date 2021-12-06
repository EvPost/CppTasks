//
//  main.c
//  l_complex_h
//
//  Created by Air on 30.11.2021.
//

/*
 Частина проекта студента 2 курсу компмат1 Постульги Євгена,
 в якій використати на Сі заголовчний файл <complex.h>
*/



#include <stdio.h>
#include <complex.h>
#include <math.h>
#include <time.h>

double complex* quadratic_equation(double complex c2, double complex c1, double complex c0 ){ //розвязання квадратного рівняння з комплексними коефіцієнтами
    //формули для дискримінанта
    double complex d=c1*c1-4.0*c2*c0;
    double complex masc[2];
    masc[0]=(-c1+csqrt(d))/(2.0*c2);
    masc[1]=(-c1-csqrt(d))/(2.0*c2);
    for(int i=0;i<2;i++){
        if(cimag(masc[i])<0) printf("%.2f%.2fi\t",creal(masc[i]), cimag(masc[i]));
        else printf("%.2f+%.2fi\t",creal(masc[i]), cimag(masc[i]));
    }
    printf("\n");
    return masc;
    
}

double complex* cubic_equation(double complex c3,double complex c2, double complex c1, double complex c0 ){ //розвязання кубічного рівняння з комплексними коефіцієнтами
    //формули Кардано
    double complex  masc[3];
    double complex  p=(3.0*c3*c1-c2*c2)/(3.0*c3*c3);
    double complex  q=(2.0*c2*c2*c2-9.0*c3*c2*c1+27.0*c3*c3*c0)/(27.0*c3*c3*c3);
    double complex  d=(q/2.0)*(q/2.0)+(p/3.0)*(p/3.0)*(p/3.0);
    double complex  a=cpow(-q/2.0+csqrt(d), 0.333333);
    double complex  b=cpow(-q/2.0-csqrt(d), 0.333333);
    double complex  i = 0.0 + 1.0 * I;
    masc[0]=a+b-c2/(3.0*c3);
    //printf("%.2f + %.2fi\t",creal(a), cimag(c3));
    masc[1]=-(a+b)/2.0+i*(a-b)*cpow(3,0.333333)/2.0-c2/(3.0*c3);
    masc[2]=-(a+b)/2.0-i*(a-b)*cpow(3,0.333333)/2.0-c2/(3.0*c3);
    for(int i=0;i<3;i++){
        if(cimag(masc[i])<0) printf("%.2f%.2fi\t",creal(masc[i]), cimag(masc[i]));
        else printf("%.2f+%.2fi\t",creal(masc[i]), cimag(masc[i]));
    }
    printf("\n");
    return masc;
}

double complex * equation_of_the_fourth_degree(double complex  c4, double complex  c3, double complex  c2, double complex  c1, double complex  c0 ){ // розвязання рівняння четвертого порядку з комплексними коефіцієнтами
    //формули Ферарі
    double complex  o = 0.0 + 0.0 * I;
    double complex  masc[4];
    double complex  a=-3.0*c3*c3/(8.0*c4*c4)+c2/c4;
    double complex  b=c3*c3*c3/(8.0*c4*c4*c4)-c3*c2/(2.0*c4*c4)+c1/c4;
    double complex  f=-3.0*c3*c3*c3*c3/(256.0*c4*c4*c4*c4)-c3*c3*c2/(16.0*c4*c4*c4)+c3*c1/(4.0*c4*c4)+c0/c4;
    if(b==o){
        masc[0]=-c3/(4.0*c4)+csqrt((-a+csqrt(a*a-4.0*f))/2.0);
        masc[1]=-c3/(4.0*c4)+csqrt((-a-csqrt(a*a-4.0*f))/2.0);
        masc[2]=-c3/(4.0*c4)-csqrt((-a+csqrt(a*a-4.0*f))/2.0);
        masc[3]=-c3/(4.0*c4)-csqrt((-a-csqrt(a*a-4.0*f))/2.0);
    }
    else{
        double complex  p=-a*a/12.0-f;
        double complex  q=-a*a*a/108.0+a*f/3.0-b*b/8.0;
        double complex  r=-q/2.0+csqrt(q*q/4.0+p*p*p/27.0);
        double complex  u=cpow(r,0.333333);
        double complex  y;
        if (u==o){
            y=-5.0*a/6.0+u-cpow(q,0.333333);
        }
        else{
            y=-5.0*a/6.0+u-p/(3.0*u);
        }
        double complex  w=csqrt(a+2.0*y);
        masc[0]=-c3/(4.0*c4)+(w+csqrt(-(3.0*a+2.0*y+2.0*b/w)))/2.0;
        masc[1]=-c3/(4.0*c4)+(w-csqrt(-(3.0*a+2.0*y+2.0*b/w)))/2.0;
        masc[2]=-c3/(4.0*c4)+(-w+csqrt(-(3.0*a+2.0*y-2.0*b/w)))/2.0;
        masc[3]=-c3/(4.0*c4)+(-w-csqrt(-(3.0*a+2.0*y-2.0*b/w)))/2.0;
    }
    for(int i=0;i<4;i++){
        if(cimag(masc[i])<0) printf("%.2f%.2fi\t",creal(masc[i]), cimag(masc[i]));
        else printf("%.2f+%.2fi\t",creal(masc[i]), cimag(masc[i]));
    }
    printf("\n");
    return masc;
}

int main() {
    unsigned int start_time=clock();//починаєм рахувати час
    
    double complex c0 = -6.0 + 0.0 * I;
    double complex c1 = 3.0 -2.0 * I;
    double complex c2 = 0.0 + 1.0 * I;
    quadratic_equation(c2,c1,c0);
    double complex c3 = 1.0 + 1.0 * I;
    cubic_equation(c3,c2,c1,c0);
    double complex c4 = 1.0 + 2.0 * I;
    equation_of_the_fourth_degree(c4,c3,c2,c1,c0);
    
    unsigned int end_time=clock();//закінчуєм рахувати час
    
    printf("час заголовчного файлa <complex.h>: %d\n: ",end_time-start_time);
    return 0;
}

