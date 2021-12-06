//
//  Person.h
//  Person_16_01
//
//  Created by Air on 03.12.2021.
//

#ifndef Person_h
#define Person_h

#include<iostream>
#include<string>

using namespace std;

class Person{
    protected:
    string name;
    unsigned byear;
    
    public:
    int input(){
        cout<<"Input name";
        cin>>name;
        cout<<"year:";
        cin>>byear;
        return 0;
    }
    
    void show(){
        std::cout<<name<< " of " << byear<<"\n";
    }
    
    friend std::ostream& operator<<(ostream & of, const Person& p){
        of << p.name << ", " << p.byear <<"\n";
        return of;
    }
    
    friend istream& operator>>(istream & of, Person& p){
        of>>p.name;
        of>>p.byear;
        return of;
    }
    
    string getName(){
        return name;
    }
    void setName(string s){
        name=s;
    }
};

#endif /* Person_h */
