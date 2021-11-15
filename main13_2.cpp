//
//  main.cpp
//  CW16_13.02
//
//  Created by Air on 14.11.2021.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string stops_con(const string &s){
    string s1=s;
    size_t p1=s.find(".");
    if(p1==string::npos){
        while (s1.length()>0 && isspace(s1[0])) {
           s1=s1.substr(1);
        }
        return s1;
    }
    size_t p2=s.find(".",p1+1);
    if(p2==string::npos){
        return s.substr(p1);
    }
    return s.substr(0,p1+1)+s.substr(p2,s.length());
}

int stops(string &s){
    size_t p1=s.find(".");
    if(p1==string::npos){
        while (s.length()>0 && isspace(s[0])) {
            s.erase(0,1);
        }
        return 0;
    }
    size_t p2=s.find(".",p1+1);
    if(p2==string::npos){
        s.erase(0,p1);
        return 1;
    }
    s.erase(p1+1,p2-p1-1);
    return 2;
}


int main() {
    string test[]={"vksb.lxj.kcdsd","dfvw.fncm:bjkjmo iwds","  dsge rtykl,mgrtgr fdfg"};
    for(int i=0;i<3;i++){
        stops(test[i]);
        cout<<test[i]<<endl;
    }
    string s;
    cin>>s;
    stops(s);
    cout<<s<<endl;
    string s1=stops_con(s);
    cout<<s1<<endl;
    return 0;
}
