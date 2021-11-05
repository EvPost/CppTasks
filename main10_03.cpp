//
//  main.cpp
//  CW12_10.03
//
//  Created by Air on 04.11.2021.
//

#include <iostream>

typedef struct Date{
    int day;
    int month;
    int year;
}Date;

int checkDate(const Date* x){
    int mas[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(x->year<1900||x->year>2200)return -1;
    if(x->month<1||x->month>12)return -2;
    if(x->day<0||x->day>mas[x->month-1])return -3;
    return 0;
}

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

bool leapYear(int year){
    return (year%4==0 and year%200!=0);
}

Date yesterday(const Date x){
    int mas[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    Date res=x;
    if(leapYear(x.year)) mas[1]++;
    if(x.day==mas[x.month-1]){
        if(x.month==12){
            res.day=1;
            res.month=1;
            res.year++;
            return res;
        }
        res.day=1;
        res.month++;
        return res;
    }
    res.day++;
    return res;
}

int main() {
    Date date1;
    date1 =inputDate();
    date1=yesterday(date1);
    printDate(date1);
    
    return 0;
}
