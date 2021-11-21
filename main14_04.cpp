//
//  main.cpp
//  CW18_14.04
//
//  Created by Air on 21.11.2021.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int getDoubles(const char* fname, char delim, double* mas, int n){
    double x;
    int k=0;
    char d;
    string s;
    ifstream f1(fname);
    if(f1.bad()){
        cerr<<"error opening file"<<fname<<endl;
    }
    while(!f1.eof() && k<n){
        if(f1>>x){
            mas[k++]=x;
        }
        else break;
        if(f1>>d){
            if(d==delim)continue;
            else cerr<<"error in file";
        }
        else break;
        k++;
    }
    f1.close();
    return k;
}
int main() {
    string fname;
    cout<<"Inpute filename:";
    cin>>fname;
    cout<<"Input n and delimeter:";
    int n;
    cin>>n;
    char delim;
    cin>>delim;
    double* mas=new double[n];
    int k=getDoubles(fname.c_str(), delim, mas, n);
    for(int i=0;i<n;i++){
        cout<<mas[i]<<", ";
    }
    delete [] mas;
    return 0;
}
