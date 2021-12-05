//
//  Student.h
//  Person
//
//  Created by Air on 04.12.2021.
//

#ifndef Student_h
#define Student_h

#include "Human.h"

class Student: virtual public Humanoid{
protected:
    int kurs;
    std::string grupa;
    std::string VUZ;
    
public:
    Student(){}
    Student(std::string name, unsigned age_, std::string sex, int kurs_, std::string grupa_, std::string VUZ_):Humanoid(name,age_,sex), kurs(kurs_), grupa(grupa_), VUZ(VUZ_){}
    
    void show(){
        std::cout<<pib<<", age"<<age<<", "<<(gender?"male":"female")<<"\n";
        std::cout<<kurs<<", "<<grupa<<", "<<VUZ<<"\n";
    }
    
    int input(){
        Humanoid::input();
        std::cout<<"Kurs, grupa,VUZ:";
        std::cin>>kurs;
        std::cin>>grupa;
        std::cin>>VUZ;
        return 0;

    }
    virtual void outVUZ(){
        std::cout<<"VUZ"<<VUZ;
    }
};
#endif /* Student_h */
