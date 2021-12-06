//
//  Complex.cpp
//  Complex
//
//  Created by Air on 30.11.2021.
//

/*
 Частина проекта студента 2 курсу компмат1 Постульги Євгена,
 в якій Створити власний клас Complex для
 комлексних чисел зі стандартними операціями на ньому
*/

#include <fstream>
#include "Comlex.h"

void Complex::show(){ // виведення
    std::cout.precision(2);
    if (im<0.0){
        std::cout<< rel<<im<<"i\t";
    }
    else{
        std::cout<< rel<<"+"<<im<<"i\t";
    }
}

int Complex::input(){  // ведення
    std::cout<<"Input rel:";
    std::cin>>rel;
    std::cout<<"Input im:";
    std::cin>>im;
    return 0;
}

Complex esqrt(const Complex& x){   // квадратний корінь з комплексного числа
    double a=sqrt((sqrt(x.im*x.im+x.rel*x.rel)+x.rel)/2.0);
    double b;
    if(x.im<0) b=-sqrt((sqrt(x.im*x.im+x.rel*x.rel)-x.rel)/2.0);
    else b=sqrt((sqrt(x.im*x.im+x.rel*x.rel)-x.rel)/2.0);
    return Complex(a,b);
}

Complex esbrt(const Complex& x){   // кубічний корінь з комплексного числа
    double a=pow(x.rel*x.rel+x.im*x.im, 0.16666)*cos(atan(x.im/x.rel)/3);
    double b=pow(x.rel*x.rel+x.im*x.im, 0.16666)*sin(atan(x.im/x.rel)/3);
    return Complex(a,b);
}


Complex* equadratic_equation(Complex& c2, Complex& c1, Complex& c0){  //розвязання квадратного рівняння з комплексними коефіцієнтами
    Complex d=c1*c1-c2*c0*4.0;
    Complex masc[2];
    masc[0]=(-c1+esqrt(d))/(c2*2.0);
    masc[1]=(-c1-esqrt(d))/(c2*2.0);
    masc[0].show();
    masc[1].show();
    return masc;
}

Complex* ecubic_equation(Complex& c3, Complex& c2, Complex& c1, Complex& c0){  //розвязання кубічного рівняння з комплексними коефіцієнтами
        Complex masc[3];
        Complex p=(c3*c1*3.0-c2*c2)/(c3*c3*3.0);
        Complex q=(c2*c2*c2*2.0-c3*c2*c1*9.0+c3*c3*c0*27.0)/(c3*c3*c3*27.0);
        Complex d=(q/2.0)*(q/2.0)+(p/3.0)*(p/3.0)*(p/3.0);
        Complex a=esbrt(-q/2.0+esqrt(d));
        Complex b=esbrt(-q/2.0-esqrt(d));
        Complex i(0.0,1.0);
        masc[0]=a+b-c2/(c3*3.0);
        masc[1]=-(a+b)/2.0+i*(a-b)*pow(3,0.333333)/2.0-c2/(c3*3.0);
        masc[2]=-(a+b)/2.0-i*(a-b)*pow(3,0.333333)/2.0-c2/(c3*3.0);
        masc[0].show();
        masc[1].show();
        masc[2].show();
        return masc;
}

Complex* eequation_of_the_fourth_degree(Complex& c4, Complex& c3, Complex& c2, Complex& c1, Complex& c0){  // розвязання рівняння четвертого порядку з комплексними коефіцієнтами
    Complex o(0.0,0.0);
    Complex masc[4];
    Complex a=-c3*c3*3.0/(c4*c4*8.0)+c2/c4;
    Complex b=c3*c3*c3/(c4*c4*c4*8.0)-c3*c2/(c4*c4*2.0)+c1/c4;
    Complex f=-c3*c3*c3*c3*3.0/(c4*c4*c4*c4*256.0)-c3*c3*c2/(c4*c4*c4*16.0)+c3*c1/(c4*c4*4.0)+c0/c4;
    if(b==o){
        masc[0]=-c3/(c4*4.0)+esqrt((-a+esqrt(a*a-f*4.0))/2.0);
        masc[1]=-c3/(c4*4.0)+esqrt((-a-esqrt(a*a-f*4.0))/2.0);
        masc[2]=-c3/(c4*4.0)-esqrt((-a+esqrt(a*a-f*4.0))/2.0);
        masc[3]=-c3/(c4*4.0)-esqrt((-a-esqrt(a*a-f*4.0))/2.0);
    }
    else{
        Complex p=-a*a/12.0-f;
        Complex q=-a*a*a/108.0+a*f/3.0-b*b/8.0;
        Complex r=-q/2.0+esqrt(q*q/4.0+p*p*p/27.0);
        Complex u=esbrt(r);
        Complex y;
        if (u==o){
            y=-a*5.0/6.0+u-esbrt(q);
        }
        else{
            y=-a*5.0/6.0+u-p/(u*3.0);
        }
        Complex w=esqrt(a+y*2.0);
        masc[0]=-c3/(c4*4.0)+(w+esqrt(-(a*3.0+y*2.0+b*2.0/w)))/2.0;
        masc[1]=-c3/(c4*4.0)+(w-esqrt(-(a*3.0+y*2.0+b*2.0/w)))/2.0;
        masc[2]=-c3/(c4*4.0)+(-w+esqrt(-(a*3.0+y*2.0-b*2.0/w)))/2.0;
        masc[3]=-c3/(c4*4.0)+(-w-esqrt(-(a*3.0+y*2.0-b*2.0/w)))/2.0;
    }
    masc[0].show();
    masc[1].show();
    masc[2].show();
    masc[3].show();
    return masc;
}
int inputFromFile(const char* fname, Complex*& p){ // читання з файлу
    std::ifstream f(fname);
    double rel, im;
    Complex w;
    int i=0;
    while(f>>rel and f>>im){
        p[i].rel=rel;
        p[i].im=im;
        i++;
    }
    f.close();
    return i;
}

int outputFromFile(const char* fname,const Complex* p, int n){ //запис в файл
    std::ofstream f(fname);
    for(int i=0;i<n;i++){
        f<<p[i].rel<<p[i].im<<std::endl;
    }
    f.close();
    return 0;
}
