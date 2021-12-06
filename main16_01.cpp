//
//  main.cpp
//  Person_16_01
//
//  Created by Air on 03.12.2021.
//

#include "Ref.h"

RefBook::RefBook(size_t n, const Aquant*r){
    book_size = n;
    for(size_t i=0; i<n;i++){
        a[i]=r[i];
        //f1<<a[i];
    }
}

int RefBook::addAquant(const Aquant& x){
    a[book_size++]=x;
    return 0;
}

long long RefBook::seekA(string s){
    for(int i=0;i<book_size;i++){
        if(a[i].getName()==s){
            return a[i].getPhone();
        }
    }
    return 0L;
}

int RefBook::change(string s, long long new_tel){
    for(int i=0; i<book_size;i++){
        if(a[i].getName()==s){
            a[i].setPhone(new_tel);
            return 1;
        }
    }
    return 0;
}


int main() {
    RefBook rb;
    Aquant a[3];
    for(int i=0;i<3;i++){
        std::cin>>a[i];
        rb.addAquant(a[i]);
    }
    string name;
    cin>>name;
    cout<<rb.seekA(name);
}
