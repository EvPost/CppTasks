//
//  main.cpp
//  Complex
//
//  Created by Air on 30.11.2021.
//

/*
 Частина проекта студента 2 курсу компмат1 Постульги Євгена,
 в якій порівнюємо результати мого класу з результатами
 стандартної бібліотеки <complex>, а також тестуємо
 функції та методу класу мого класу
 (Зрозуміло що головний тест мого класа це реалізація формули
 для дискримінанта, формули Кардано та формули Ферарі де
 використовується більшість моїх операторів та функцій)
*/

#include "Comlex.h"
#include "l_comlex.h"
#include <ctime>

int main() {
    unsigned int start_time=clock(); //починаєм рахувати час
    
    Complex r2(0.0,1.0);
    Complex r1(3.0,-2.0);
    Complex r0(-6.0,0.0);
    equadratic_equation(r2, r1, r0);
    Complex r3(1.0,1.0);
    Complex r4(1.0,2.0);
    std::cout<<std::endl;
    ecubic_equation(r3,r2,r1,r0);
    std::cout<<std::endl;
    eequation_of_the_fourth_degree(r4,r3,r2,r1,r0);
    std::cout<<std::endl;
    unsigned int end_time=clock();  //закінчуєм рахувати час
    
    cout<<"час мого класу: "<<end_time-start_time<<endl;
    
    unsigned int start_time1=clock(); //починаєм рахувати час
    
    complex<double> c2( 0.0 ,1.0 );
    complex<double> c1( 3.0 , -2.0 );
    complex<double> c0( -6.0 , 0.0 );
    quadratic_equation(c2,c1,c0);
    std::cout<<std::endl;
    complex<double> c3( 1.0 ,1.0 );
    cubic_equation(c3,c2,c1,c0);
    complex<double> c4( 1.0 ,2.0 );
    std::cout<<std::endl;
    equation_of_the_fourth_degree(c4,c3,c2,c1,c0);
    std::cout<<std::endl;
    
    unsigned int end_time1=clock();  //закінчуєм рахувати час
    cout<<"час стандартної бібліотеки <complex>: "<<end_time1-start_time1<<endl;
    
    
    
    Complex rn;
    rn=esqrt(r2)*r1/r0+esbrt(r0)+r1*4.0;
    rn.show();
    Complex rm;
    cout<<endl;
    rm.input();
    rm.show();
    cout<<(rn!=rm)<<endl;
    Complex* a=equadratic_equation(r2, r1, r0);
    
    outputFromFile("test_comp.txt", a, 2);
    Complex* b;
    int c = inputFromFile("test_comp.txt", b);
    for(int i=0;i<c;i++){
        b[i].show();
    }
    
}
