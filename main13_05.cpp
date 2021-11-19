//
//  main.cpp
//  CW17_13.05
//
//  Created by Air on 19.11.2021.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <climits>
using namespace std;

string words_a(string s, char del){
    stringstream sstream(s);
    string word;
    int min_word_len=INT_MAX;
    string min_word="";
    while (getline(sstream, word, del)) {
        if(word.size()<min_word_len){
            min_word=word;
            min_word_len=word.size();
        }
    }
    return min_word;
}

string words_b(string s, char del){
    stringstream sstream(s);
    string word;
    int min_word_len=INT_MAX;
    string min_word="";
    while (getline(sstream, word, del)) {
        if(word.size()<=min_word_len){
            min_word=word;
            min_word_len=word.size();
        }
    }
    return min_word;
}

void words_c(string s, char del){
    stringstream sstream(s);
    stringstream sstream2(s);
    string word;
    int min_word_len=INT_MAX;
    while (getline(sstream, word, del)) {
        if(word.size()<min_word_len){
            min_word_len=word.size();
        }
    }
    while (getline(sstream2, word, del)) {
        if(word.size()==min_word_len){
            cout<<word<<",";
        }
    }
    cout<<endl;
}

int main() {
    string text="Write your code in this editor and press button to compile and execute it";
    char del=' ';
    cout<<words_a(text, ' ')<<endl;
    cout<<words_b(text, ' ')<<endl;
    words_c(text, ' ');
    return 0;
}
