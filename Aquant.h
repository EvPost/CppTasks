//
//  Aquant.h
//  Person_16_01
//
//  Created by Air on 03.12.2021.
//

#ifndef Aquant_h
#define Aquant_h

#include "Person.h"

class Aquant: public Person{
protected:
    long long tel;
public:
    Aquant(){}
    Aquant(string pname, unsigned y, long long t){
        name=pname;
        byear=y;
        tel=t;
    }
    
    void show(){
        Person::show();
        cout<<"Phone:"<<tel;
    }
    
    friend ostream& operator<<(ostream & of, Aquant& p){
        of<<p.getName()<<", "<<p.getPhone()<<endl;
        return of;
    }
    
    friend istream& operator>>(istream & of, Aquant& p){
        string s;
        unsigned age;
        long long tel;
        
        of>>s;
        of>>age;
        of>>tel;
        p.setPhone(tel);
        p.setName(s);
        return of;
    }
    
    void setPhone(long long s){
        tel=s;
    }
    
    long long getPhone(){
        return tel;
    }
};

#endif /* Aquant_h */
