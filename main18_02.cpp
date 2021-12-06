//
//  main.cpp
//  CW23_18.02
//
//  Created by Air on 04.12.2021.
//

#include <iostream>
#include <stack>

int vvod(std::stack<int>& v){
    int k=0;
    int x;
    do{
        std::cin>>x;
        if(x==0) break;
    }while(true);
    return 0;
}

int vyvod(std::stack<int>& v){
    int x;
    while(!v.empty()){
        x=v.top();
        std::cout<<" "<<x;
        v.pop();
    }
    return 0;
}

const size_t M = 1000;

namespace  OurStack{
template<class T>
class stack{
    T data[M];
    size_t m;
public:
    stack(){
        m=0;
    }
    int push(const T& x);
    void pop();
    T top();
    bool empty();
};
template<class T>
int stack<T>::push(const T& x){
    data[m++]=x;
    return m<M;
}

int vvod(OurStack::stack<int>& v){
    int k=0;
    int x;
    do{
        std::cin>>x;
        if(x==0) break;
        v.push(x);
        k++;
    }while(true);
    return k;
}

int vyvod(OurStack::stack<int>& v){
    int x;
    while(!v.empty()){
        x=v.top();
        std::cout<<" "<<x;
        v.pop();
    }
    return 0;
}


}

template<class T>
void OurStack::stack<T>::pop(){
    if(empty()) return;
    m--;
}

template<class T>
T OurStack::stack<T>::top(){
    if(empty()) return T(0);
    return data[m-1];
}

template<class T>
bool  OurStack::stack<T>::empty(){
    return m==0;
}

int main() {
    const int N=10;
    OurStack::stack<int> arr;
    OurStack::vvod(arr);
    OurStack::vyvod(arr);
    return 0;
}
