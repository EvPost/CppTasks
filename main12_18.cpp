//
//  main.cpp
//  HW15_12.18
//
//  Created by Air on 13.11.2021.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#define N 100
using namespace std;

int factorial(int i)
{
  if (i==0) return 1;
  else return i*factorial(i-1);
}

int main() {
    const char* finput="file_input12_18.txt";
    const char* foutput="file_output12_18.txt";
    ifstream ifile(finput);
    if(!ifile){
    cout << "Файл не відкритий."; return -1;
    }
    string*S=new string[N];
    string s;
    int i=0;
    while (!ifile.eof()) {
        if(ifile>>s){
            S[i]=s;
            cout<<s<<endl;
        }
        i++;
    }
    ifile.close();
    string s_r[N][2];
    int q=0;
    for (int j=0; j<i; j++) {
        for (int k=j; k<i; k++) {
            s_r[q][0]=S[j];
            s_r[q][1]=S[k];
        }
    }
    string s_r1[N][2];
    double a[N]; //масив довжин
    int x,y;
    unsigned long n1,n2;
    for (int j=0; j<factorial(i)/(factorial(i-2)*2); j++) {
        s_r1[j][0]=s_r[j][0];
        s_r1[j][0].erase (remove(s_r1[j][0].begin(), s_r1[j][0].end(), ")"), s_r1[j][0].end());
        s_r1[j][0].erase (remove(s_r1[j][0].begin(), s_r1[j][0].end(), "("), s_r1[j][0].end());
        n1=s_r1[j][0].find(",");
        s_r1[j][1]=s_r[j][1];
        s_r1[j][1].erase (remove(s_r1[j][1].begin(), s_r1[j][1].end(), ")"), s_r1[j][1].end());
        s_r1[j][1].erase (remove(s_r1[j][1].begin(), s_r1[j][1].end(), "("), s_r1[j][1].end());
        n2=s_r1[j][1].find(",");
        x=stoi(s_r1[j][0].erase(n1))-stoi(s_r1[j][0].erase(n1));
        y=stoi(s_r1[j][0].substr(n1))-stoi(s_r1[j][1].substr(n1));
        a[j]=sqrt(x*x+y*y);
    }
    int mas[factorial(i)/(factorial(i-2)*2)];
    for (int j=0; j<factorial(i)/(factorial(i-2)*2); j++) {
        int mc=0,locmax=0;
        for (int k=0; j<factorial(i)/(factorial(i-2)*2); k++) {
            if (a[k]>locmax){
                mc=k;
                locmax=a[k];
            }
        }
        a[mc]=0;
        mas[j]=mc;
    }
    int mas1[factorial(i)/(factorial(i-2)*2)];
    for (int j=0; j<factorial(i)/(factorial(i-2)*2); j++) {
        mas1[j]=mas[(factorial(i)/(factorial(i-2)*2))-1-j];
    }
    
    
    ofstream file_2(foutput);
    if(file_2.bad()){
        cerr<<"Error in output file";
    }
    for (int i=0; i<factorial(i)/(factorial(i-2)*2); i++) {
        file_2<<s_r[mas1[i]][0]<<s_r[mas1[i]][1]<<endl;
    }
    file_2.close();
    return 0;
}
