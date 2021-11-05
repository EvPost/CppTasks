//
//  main.cpp
//  CW12_10.01v
//
//  Created by Air on 02.11.2021.
//

#include <iostream>

typedef struct Point{
    double x;
    double y;
}Point;

typedef struct Rectangel{
    Point A;
    Point B;
} Rectangel;

void inputRect(Rectangel* r){
    printf("A(x,y):");
    scanf("%lf %lf",&r->A.x, &r->A.y);
    printf("B(x,y):");
    scanf("%lf %lf",&r->B.x, &r->B.y);
}

void printRect(Rectangel* r){
    printf("(%lf %lf)", r->A.x,r->A.y);
    printf("-(%lf %lf)\n", r->B.x,r->B.y);
}

int main() {
    Rectangel r;
    inputRect(&r);
    printRect(&r);
    return 0;
}
