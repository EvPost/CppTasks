//
//  main.cpp
//  CW12_10.01
//
//  Created by Air on 02.11.2021.
//

#include <iostream>

struct Date{
    int day;
    int month;
    int year;
};

struct Date inputDate(){
    int d,m,y;
    printf("input day:");
    scanf("%d",&d);
    printf("input month:");
    scanf("%d",&m);
    printf("input year:");
    scanf("%d",&y);
    
    struct Date res ={d,m,y};
    return res;
}

void printDate(struct Date date1){
    printf("%d.%d.%d\n",date1.day, date1.month, date1.year);
}

int main() {
    struct Date date1;
    date1.day=22;
    date1.month=5;
    date1.year=1667;
    printDate(date1);
    struct Date date2;
    date2 =inputDate();
    printDate(date2);
    return 0;
}
