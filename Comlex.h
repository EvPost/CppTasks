//
//  Comlex.h
//  Complex
//
//  Created by Air on 30.11.2021.
//

#ifndef Comlex_h
#define Comlex_h

#include <iostream>
#include <cmath>
#include <limits>
#include <exception>

/*
 Частина проекта студента 2 курсу компмат1 Постульги Євгена,
 в якій Створити власний клас Complex для
 комлексних чисел зі стандартними операціями на ньому
*/

class Complex{
    private:
    double rel;
    double im;

    public:
    Complex(){}
    
    Complex(double x, double y):rel(x),im(y){
    }
    
    void show(); // виведення
    int input(); // ведення

    int setrel(double x){  // Повернення дійсної частини
        rel = x;
        return 0;
    }
    int setim(double y){ // Повернення уявної частини
        im = y;
        return 0;
    }
    friend Complex esqrt(const Complex& x); // квадратний корінь з комплексного числа
    friend Complex esbrt(const Complex& x); // кубічний корінь з комплексного числа
    
    friend Complex* equadratic_equation(Complex& c2, Complex& c1, Complex& c0);  //розвязання квадратного рівняння з комплексними коефіцієнтами
    friend Complex* ecubic_equation(Complex& c3, Complex& c2, Complex& c1, Complex& c0);  //розвязання кубічного рівняння з комплексними коефіцієнтами
    friend Complex* eequation_of_the_fourth_degree(Complex& c4, Complex& c3, Complex& c2, Complex& c1, Complex& c0);  // розвязання рівняння четвертого порядку з комплексними коефіцієнтами

    Complex operator+(const Complex& x){ // перевантаження +
        return Complex(rel+x.rel,im+x.im);
    }
    
    Complex operator-(const Complex& x){ // перевантаження -
        return Complex(rel-x.rel,im-x.im);
    }
    
    Complex operator-(){  // перевантаження -
        return Complex(-rel,-im);
    }
    
    Complex operator*(const double x){  // перевантаження *
        return Complex(rel*x,im*x);
    }
    
    Complex operator*(const Complex& x){  // перевантаження *
        return Complex(rel*x.rel-im*x.im,im*x.rel+x.im*rel);
    }
    
    Complex operator/(const Complex& x){ // перевантаження /
        double a=x.rel*x.rel+x.im*x.im;
        return Complex((rel*x.rel+im*x.im)/a,(im*x.rel-x.im*rel)/a);
    }
    
    Complex operator/(const double x){ // перевантаження /
        return Complex(rel/x,im/x);
    }
    
    bool operator==(const Complex & x){  // перевантаження ==
        return std::fabs(rel-x.rel)<std::numeric_limits<double>::epsilon() && std::fabs(im-x.im)<std::numeric_limits<double>::epsilon();
    }
    
    bool operator!=(const Complex & x){  // перевантаження !
        return std::fabs(rel-x.rel)>std::numeric_limits<double>::epsilon() && std::fabs(im-x.im)>std::numeric_limits<double>::epsilon();
    }
    friend int inputFromFile(const char* fname, Complex*& p); // читання з файлу
    friend int outputFromFile(const char* fname,const Complex* p, int n); //запис в файл
};

#endif /* Comlex_h */
