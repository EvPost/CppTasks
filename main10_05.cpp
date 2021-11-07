//
//  main.cpp
//  CW13_10.05
//
//  Created by Air on 06.11.2021.
//

#include <iostream>
#define N 10

typedef struct {
int high;
char name[20];
} Mountain;

int vvod(Mountain* mt){
    printf("Mountain(name, higt):");
    scanf("%s",mt->name);
    scanf("%d",&(mt->high));
    return 0;
}

int print(Mountain mt){
    printf("Mountain(%s, %d):", mt.name, mt.high);
    return 0;
}

void hidhest(const Mountain* mts,int n){
    int max=mts[0].high;
    int ind=0;
    for (int i=0; i<n; i++) {
        if (max<mts[i].high){
            max=mts[i].high;
            ind=i;
        }
    }
    printf("\nName of highest mountain is %s\n",mts[ind].name);
}

void high_name(const Mountain* mts,int n, char* mname){
    for (int i=0; i<n; i++) {
        if(strcmp(mname,mts[i].name)==0){
            printf("\nHeight of %s is %d\n",mname,mts[i].high);
            return;
        }
    }
    printf("\nNo Mountain %s\n", mname);
}


int main() {
    Mountain man[]={{1222,"M1"},{2244,"M2"},{1576,"M3"}};
    hidhest(man, 3);
    high_name(man, 3,"M3");
    high_name(man, 3,"M4");
    return 0;
}
