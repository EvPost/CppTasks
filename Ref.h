//
//  Ref.h
//  Person_16_01
//
//  Created by Air on 03.12.2021.
//

#ifndef Ref_h
#define Ref_h

#include "Aquant.h"
#include <fstream>

class RefBook{
    size_t book_size;
    Aquant a[100];
    
    //fstream f1("ref1.txt");
    
public:
    RefBook(){
        book_size=0;
    }
    
    RefBook(size_t n){
        book_size=n;
    }
    
    RefBook(size_t n, const Aquant*r);
    
    int addAquant(const Aquant& x);
    
    long long seekA(string s);
    
    int change(string s, long long new_tel);
    
};
#endif /* Ref_h */
