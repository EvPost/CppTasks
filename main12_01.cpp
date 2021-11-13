//
//  main.cpp
//  CW15_12.01
//
//  Created by Air on 12.11.2021.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x,y;
    cin>>x>>y;
    double res=pow(x,y);
    cout<<res<<endl;
    cout.setf(ios::scientific);
    cout<<res;
    return 0;
}
