//
//  main.cpp
//  Person
//
//  Created by Air on 04.12.2021.
//

#include "PostGrad.h"

int main() {
    Humanoid*mas[20];
    int n;
    std::cout<<"N=";
    std::cin>>n;
    for (int i=0;i<n; i++){
        std::cout<<"Input person(L,S,A):";
        std::string tmp;
        std::cin>>tmp;
        if(tmp.length()>0){
            if(tmp[0]=='l'){
                Lecturer l;
                l.input();
                mas[i]= new Lecturer(l);
            }
            else if(tmp[0]=='s'){
                Student s;
                s.input();
                mas[i]= new Student(s);
            }
            else if(tmp[0]=='a'){
                PostGrad a;
                a.input();
                mas[i]= new PostGrad(a);
            }
        }
        
    }
    
    std::cout<<"Out:\n";
    for (int i=0;i<n; i++){
        Lecturer* l=dynamic_cast<Lecturer*>(mas[i]);
        if(l){
            std::cout<<"\n Number"<<i<<"\ncasted to lecturer:";
            l->outVUZ();
        }
        else{
            mas[i]->show();
            std::cout<<"\n not casted to lecturer";
        }
        
    }
    return 0;
}
