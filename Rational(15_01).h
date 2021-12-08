//
//  Rational(15_01).h
//  Rational(15_01)
//
//  Created by Air on 21.11.2021.
//

#ifndef Rational_15_01__h
#define Rational_15_01__h

#include <iostream>
#include <cmath>

class Rational{
    private:
    int nom;
    unsigned denom;

    public:
    Rational(){
        nom = 1;
        denom = 1U;
    }
    Rational(int x, unsigned y):nom(x),denom(y){
        reduce();
    }
    
    void show();
    int input();

    int setNom(int x){
        nom = x;
        return 0;
    }
    int setDenom(unsigned y){
        if(y!=0){
            denom = y;
            return 0;
        }
        return -1;
    }
    
    Rational add(const Rational& x); //x.add(y);
    Rational mult(const Rational& x);

    bool less(const Rational & x){
        return (nom*x.denom<denom*x.nom);
    }

    double compare(double z){
        return fabs(z - (nom+0.)/denom);
    }

    static unsigned gcd(unsigned x, unsigned y);


    
    private:
    void reduce();
};


#endif /* Rational_15_01__h */
