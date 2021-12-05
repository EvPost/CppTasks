//
//  Human.h
//  Person
//
//  Created by Air on 04.12.2021.
//

#ifndef Human_h
#define Human_h

#include <iostream>
#include <string>
#include <cctype>

class Humanoid{
protected:
    std::string pib;
    unsigned age;
    bool gender;
public:
    Humanoid(){}
    Humanoid(std::string name, unsigned age_, std::string sex){
        pib=name;
        age=age_;
        if(sex=="male") gender=false;
        else if(sex=="female") gender=true;
        else throw "incorrect Gender";
        }
    
    virtual void show(){
        std::cout<<pib<<", age"<<age<<", "<<(gender?"male":"female")<<"\n";
    }
    
    int input(){
        std::cout<<"Input name, age, gender";
        std::cin>>pib;
        std::cin>>age;
        std::string sex;
        std::cin>>sex;
        if(sex.length()>0){
            char c=tolower(sex[0]);
            if(c='m') gender=false;
            else if (c=='f'|| c=='w') gender=true;
            else throw "incorrect Gender";
        }
        else{
            throw "incorrect Gender";
        }
        return 0;
    }
    virtual void outVUZ()=0;
};
#endif /* Human_h */
