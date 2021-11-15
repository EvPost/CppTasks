//
//  main.cpp
//  CW16_13.01
//
//  Created by Air on 14.11.2021.
//

#include <iostream>
#include <string>
using namespace std;

string semicolumn(const string& s){
    size_t p1=s.find(":");
    if (p1==string::npos){
        return s;
    }
    size_t p2=s.find(",",p1+1);
    if(p2==string::npos){
        return s.substr(p1+1,s.length()-p1);
    }
    return s.substr(p1+1,p2-p1-1);
}

int semicolumn_inplace(string& s){
    size_t p1=s.find(":");
    if (p1==string::npos){
        return 0;
    }
    s.erase(0,p1+1);
    size_t p2=s.find(",");
    if(p2==string::npos){
        return 1;
    }
    s.erase(p2,s.length()-p2);
    return 2;
}



int main() {
    string test[]={"vksb:lxj,kcdsd","dfvw fncm:bjkjmo iwds","dsge rtykl,mgrtgr fdfg"};
    for(int i=0;i<3;i++){
        string s1=semicolumn(test[i]);
        cout<<s1<<endl;
    }
    string s;
    cin>>s;
    string s1=semicolumn(s);
    cout<<s1<<endl;
    semicolumn_inplace(s);
    cout<<s<<endl;
    return 0;
}
