//
//  main.cpp
//  CW24_19.04
//
//  Created by Air on 06.12.2021.
//

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

vector<list<double>> iput(unsigned n, unsigned m){
    vector<list<double>> res;
    for(unsigned i=0;i<n;++i){
        list<double> lst;
        double tmp;
        for (unsigned j=0; j<m; j++) {
            cout<<"a["<<i<<","<<j<<"]=";
            cin>>tmp;
            lst.push_back(tmp);
        }
        res.push_back(lst);
    }
    return res;
}

void showMatrix(const vector<list<double>>& matr){
    for(vector<list<double>>::const_iterator it=matr.begin();it!=matr.end();it++){
        for (list<double>::const_iterator it1=it->begin(); it1!=it->end(); ++it1){
            cout<<*it1<<"\t";
        }
        cout<<"\n";
    }
}

void replaceRows(vector<list<double>>& matr, int i, int j){
    list<double> tmp= matr[i];
    matr[i]=matr[j];
    matr[j]=tmp;
}

vector<list<double>> sortByMax(vector<list<double>>& matr){
    vector<list<double>> res;
    list<pair<double,int>> rowmax;
    int i=0;
    for(vector<list<double>>::const_iterator it=matr.begin();it!=matr.end();it++,i++){
        double m=*max_element(it->begin(), it->end());
        rowmax.push_back(make_pair(m, i));
        cout<<"\nmax"<<m;
    }
    rowmax.sort();
    int k=0;
    for(list<pair<double,int>>::iterator it=rowmax.begin();it!=rowmax.end();it++,k++){
        cout<<k<<":"<<it->first<<","<<it->second<<"\n";
        res.push_back(matr[it->second]);
    }
    return res;
}

int main() {
    unsigned n,m;
    cout<<"N, M:";
    cin>>n>>m;
    vector<list<double>> a=iput(n, m);
    showMatrix(a);
    vector<list<double>> b=sortByMax(a);
    showMatrix(b);
    return 0;
}
