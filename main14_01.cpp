//
//  main.cpp
//  CW17_14.01
//
//  Created by Air on 19.11.2021.
//

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    char fname[20]="deutsh.txt";
    ifstream f(fname);
    string Artikles[]={"die","der","das"};
    string buf;
    bool art=false;
    ofstream f2("tmp.txt");
    while(f>>buf){
        if(art){
            buf[0]=toupper(buf[0]);
        }
        clog<<buf<<" ";
        f2<<buf<<" ";
        art=false;
        for(int i=0;i<3;i++){
            if(buf==Artikles[i]){
                art=true;
                break;
            }
        }
    }
    f.close();
    f2.close();
    return 0;
}
