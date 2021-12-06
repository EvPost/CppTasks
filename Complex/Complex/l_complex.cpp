//
//  l_complex.cpp
//  Complex
//
//  Created by Air on 30.11.2021.
//

/*
 Частина проекта студента 2 курсу компмат1 Постульги Євгена,
 в якій використовуємо на на Сі++ стандартну бібліотеку <complex>
*/

#include "l_comlex.h"

void show(complex<double> c){ // виведення
    std::cout.precision(2);
    if (c.imag()<0.0){
        std::cout<< c.real()<<c.imag()<<"i\t";
    }
    else{
        std::cout<< c.real()<<"+"<<c.imag()<<"i\t";
    }

}

complex<double>* quadratic_equation(complex<double> c2, complex<double> c1, complex<double> c0 ){   //розвязання квадратного рівняння з комплексними коефіцієнтами
    complex<double> d=c1*c1-4.0*c2*c0;
    complex<double> masc[2];
    std::cout.precision(2);
    masc[0]=(-c1+sqrt(d))/(2.0*c2);
    masc[1]=(-c1-sqrt(d))/(2.0*c2);
    //cout<<masc[0]<<masc[1];
    show(masc[0]);
    show(masc[1]);
    return masc;
}

complex<double>* cubic_equation(complex<double> c3,complex<double> c2, complex<double> c1, complex<double> c0 ){   //розвязання кубічного рівняння з комплексними коефіцієнтами
    complex<double> masc[3];
    complex<double> p=(3.0*c3*c1-c2*c2)/(3.0*c3*c3);
    complex<double> q=(2.0*c2*c2*c2-9.0*c3*c2*c1+27.0*c3*c3*c0)/(27.0*c3*c3*c3);
    complex<double> d=(q/2.0)*(q/2.0)+(p/3.0)*(p/3.0)*(p/3.0);
    complex<double> a=pow(-q/2.0+sqrt(d), 0.333333);
    complex<double> b=pow(-q/2.0-sqrt(d), 0.333333);
    complex<double> i(0.0,1.0);
    masc[0]=a+b-c2/(3.0*c3);
    masc[1]=-(a+b)/2.0+i*(a-b)*pow(3,0.333333)/2.0-c2/(3.0*c3);
    masc[2]=-(a+b)/2.0-i*(a-b)*pow(3,0.333333)/2.0-c2/(3.0*c3);
    //cout<<masc[0]<<masc[1]<<masc[2];
    show(masc[0]);
    show(masc[1]);
    show(masc[2]);
    return masc;
}

complex<double>* equation_of_the_fourth_degree(complex<double> c4, complex<double> c3, complex<double> c2, complex<double> c1, complex<double> c0 ){ // розвязання рівняння четвертого порядку з комплексними коефіцієнтами
    complex<double> o(0.0,0.0);
    complex<double> masc[4];
    complex<double> a=-3.0*c3*c3/(8.0*c4*c4)+c2/c4;
    complex<double> b=c3*c3*c3/(8.0*c4*c4*c4)-c3*c2/(2.0*c4*c4)+c1/c4;
    complex<double> f=-3.0*c3*c3*c3*c3/(256.0*c4*c4*c4*c4)-c3*c3*c2/(16.0*c4*c4*c4)+c3*c1/(4.0*c4*c4)+c0/c4;
    if(b==o){
        masc[0]=-c3/(4.0*c4)+sqrt((-a+sqrt(a*a-4.0*f))/2.0);
        masc[1]=-c3/(4.0*c4)+sqrt((-a-sqrt(a*a-4.0*f))/2.0);
        masc[2]=-c3/(4.0*c4)-sqrt((-a+sqrt(a*a-4.0*f))/2.0);
        masc[3]=-c3/(4.0*c4)-sqrt((-a-sqrt(a*a-4.0*f))/2.0);
    }
    else{
        complex<double> p=-a*a/12.0-f;
        complex<double> q=-a*a*a/108.0+a*f/3.0-b*b/8.0;
        complex<double> r=-q/2.0+sqrt(q*q/4.0+p*p*p/27.0);
        complex<double> u=pow(r,0.333333);
        complex<double> y;
        if (u==o){
            y=-5.0*a/6.0+u-pow(q,0.333333);
        }
        else{
            y=-5.0*a/6.0+u-p/(3.0*u);
        }
        complex<double> w=sqrt(a+2.0*y);
        masc[0]=-c3/(4.0*c4)+(w+sqrt(-(3.0*a+2.0*y+2.0*b/w)))/2.0;
        masc[1]=-c3/(4.0*c4)+(w-sqrt(-(3.0*a+2.0*y+2.0*b/w)))/2.0;
        masc[2]=-c3/(4.0*c4)+(-w+sqrt(-(3.0*a+2.0*y-2.0*b/w)))/2.0;
        masc[3]=-c3/(4.0*c4)+(-w-sqrt(-(3.0*a+2.0*y-2.0*b/w)))/2.0;
    }
    //cout<<masc[0]<<masc[1]<<masc[2]<<masc[3];
    show(masc[0]);
    show(masc[1]);
    show(masc[2]);
    show(masc[3]);
    return masc;
}

