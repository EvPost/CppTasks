//
//  main.cpp
//  CW16_13.03
//
//  Created by Air on 15.11.2021.
//

#include <iostream>
#include <string>
using namespace std;

int sl_word(const string& s){
    char start=0;
    char fin=0;
    bool space=true;
    int res=0;
    for (size_t i=0; i<=s.size(); i++) {
        if (s[i]==' '||s[i]=='\0') {
            if(!space){
                fin=s[i-1];
                if (fin==start){
                    res++;
                }
            }
            space=true;
        }
        else{
            if(space){
                start=s[i];
            }
            space=false;
        }
    }
    return res;
}

int main() {
    string inp_str;
    getline(cin,inp_str);
    int k=sl_word(inp_str);
    cout<<"\n The words with same start/end="<<k<<endl;
    return 0;
}
