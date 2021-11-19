//
//  main.cpp
//  CW17_14.02
//
//  Created by Air on 19.11.2021.
//

#include <iostream>
#include <fstream>
using namespace std;

bool in(char s){
    string punct=".,?!";
    if(s==' ')return true;
    for(char sym: punct){
        if(s==sym)return true;
    }
    return false;
}

string inver(const string &s){
    string res="";
    size_t n=s.size()-1;
    for(int i=0;i<=n;i++){
        res.push_back(s[n-i]);
    }
    return res;
}

int main() {
    string line;
    ifstream infile("example.txt");
    ofstream outfile("example_out.txt");
    string ans="";
    string word="";
    string text;
    char sym;
    if(infile.is_open()){
        while (getline(infile,text,'\n')) {;
            for (int i=0;i<text.size();++i){
                sym=text[i];
                if (in(sym)){
                    if(word!=""){
                        ans=inver(word);
                        outfile<<ans;
                    }
                    outfile<<sym;
                    word="";
                }
                else{
                   // cout<<sym;
                    word.push_back(sym);
                }
                //cout<<sym<<endl;
            }
        }
        infile.close();
    }
    outfile.close();
    return 0;
}
