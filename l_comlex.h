//
//  l_comlex.h
//  Complex
//
//  Created by Air on 30.11.2021.
//

/*
 Частина проекта студента 2 курсу компмат1 Постульги Євгена,
 в якій використовуємо на на Сі++ стандартну бібліотеку <complex>
*/

#ifndef l_comlex_h
#define l_comlex_h

#include <complex>
#include <iostream>
using namespace std;

complex<double>* quadratic_equation(complex<double> c2, complex<double> c1, complex<double> c0);
//розвязання квадратного рівняння з комплексними коефіцієнтами

complex<double>* cubic_equation(complex<double> c3,complex<double> c2, complex<double> c1, complex<double> c0 );  //розвязання кубічного рівняння з комплексними коефіцієнтами

complex<double>* equation_of_the_fourth_degree(complex<double> c4, complex<double> c3, complex<double> c2, complex<double> c1, complex<double> c0 ); // розвязання рівняння четвертого порядку з комплексними коефіцієнтами
#endif /* l_comlex_h */
