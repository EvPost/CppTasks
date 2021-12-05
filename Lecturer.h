//
//  Lecturer.h
//  Person
//
//  Created by Air on 04.12.2021.
//

#ifndef Lecturer_h
#define Lecturer_h

#include "Human.h"

class Lecturer: virtual public Humanoid{
    std::string VUZ1;
protected:
    std::string posada;
    double salary;
    
public:
    Lecturer(){}
    Lecturer(std::string name, unsigned age_, std::string sex,std::string VUZ_,std::string pos, double zp):Humanoid(name,age_,sex),VUZ1(VUZ_), posada(pos), salary(zp){}
    
    void show(){
        std::cout<<pib<<", age"<<age<<", "<<(gender?"male":"female")<<"\n";
        std::cout<<VUZ1<<", "<<posada<<", "<<salary<<"\n";
    }
    
    int input(){
        Humanoid::input();
        std::cout<<"VUZ1, posada,salary:";
        std::cin>>VUZ1;
        std::cin>>posada;
        std::cin>>salary;
        return 0;

    }
    virtual void outVUZ(){
        std::cout<<"Lecturer VUZ"<<VUZ1;
    }
};
#endif /* Lecturer_h */
