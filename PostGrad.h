//
//  PostGrad.h
//  Person
//
//  Created by Air on 04.12.2021.
//

#ifndef PostGrad_h
#define PostGrad_h

#include "Student.h"
#include "Lecturer.h"

class PostGrad: public Lecturer,Student{
public:
    PostGrad(){}
    PostGrad(std::string name, unsigned age_, std::string sex,std::string VUZ_,std::string pos, double zp, int kurs_, std::string grupa_):Lecturer(name,age_,sex, VUZ_, pos, zp){
        kurs=kurs_, this->grupa=grupa_;
    }
    
    void show(){
        std::cout<<pib<<", age"<<age<<", "<<(gender?"male":"female")<<"\n";
        std::cout<<posada<<", "<<VUZ<<"\n";
        std::cout<<grupa<<", "<<kurs<<"\n";
    }
    
    int input(){
        Lecturer::input();
        std::cout<<"Grupa, Kurs";
        std::cin>>grupa;
        std::cin>>kurs;
        return 0;

    }
    virtual void outVUZ(){
        std::cout<<"post grad VUZ"<<VUZ;
    }
};
#endif /* PostGrad_h */
