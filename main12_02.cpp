//
//  main.cpp
//  CW15_12.02
//
//  Created by Air on 13.11.2021.
//

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    char str[10];
    unsigned a;
    unsigned long long sum=0L;
    cout<<"Enter";
    unsigned n=0;
    unsigned mas[1000];
    while (cin.get(str,10)){
        cout<<str<<","<<endl;
        a=atoi(str);
        mas[n]=a;
        n++;
        sum=sum+a;
    }
    cout<<"s="<<sum<<"\n";
    return 0;
}
