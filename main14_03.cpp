//
//  main.cpp
//  CW18_14.03
//
//  Created by Air on 21.11.2021.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int tag_words(string &s, int stars[], int ends[],int& n){
    int start_tag=false;
    n=0;
    for(size_t i=0;i<s.length()-3;i++){
        string buf=s.substr(i,3);
        if(buf=="<td>"){
            start_tag=true;
            stars[n]=i+3;
        }
        else{
            if(start_tag && s[i]=='<' && s[i+1]=='/' && s[i+2]=='t' && s[i+3]=='d' && s[i+4]=='>'){
                start_tag=false;
                ends[n]=i;
                n++;
            }
        }
    }
    return 1;
}

int main() {
    ifstream File("file.txt");
    string str;
    int s[10],e[10];
    int n;
    while (getline(File, str)) {
        tag_words(str, s, e, n);
        for(int i=0;i<n;i++){
            string buf=str.substr(s[i],e[i]);
        }
    }
    return 0;
}
