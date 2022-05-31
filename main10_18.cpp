//
//  main.cpp
//  HW13_10.18
//
//  Created by Air on 06.11.2021.
//

#include <iostream>
#include <string.h>
#include <math.h>

typedef struct Point{
    double x_or_r;
    double y_or_a;
    char tip[10];
}Point;

Point inputPoint(){
    Point p;
    char str1[10]="prm";
    char str2[10]="pol";
    do{
        printf("Прямокутна або полярна система(prm або pol)\n");
        scanf("%s",p.tip);
    } while(strcmp(p.tip,str1)!=0 && strcmp(p.tip,str2)!=0);
    if(strcmp(p.tip,"prm")==0){
        printf("x y:");
        scanf("%lf %lf",&p.x_or_r, &p.y_or_a);
    }
    if(strcmp(p.tip,"pol")==0){
        printf("r a:");
        scanf("%lf %lf",&p.x_or_r, &p.y_or_a);
    }
    return p;
}

void printPoint(Point* r){
    //char* q[]={"prm", "pol"};
    if(strcmp(r->tip,"prm")==0){
        printf("x=%lf  y=%lf", r->x_or_r,r->y_or_a);
    }
    if(strcmp(r->tip,"pol")==0){
        printf("r=%lf  a=%lf", r->x_or_r,r->y_or_a);
    }
}

double plosha(Point a, Point b, Point c){
    double q[6];
    if(strcmp(a.tip,"prm")==0){
        q[0]=a.x_or_r;
        q[1]=a.y_or_a;
    }
    if(strcmp(a.tip,"pol")==0){
        q[0]=a.x_or_r*cos(a.y_or_a);
        q[1]=a.x_or_r*sin(a.y_or_a);
    }
    if(strcmp(b.tip,"prm")==0){
        q[2]=b.x_or_r;
        q[3]=b.y_or_a;
    }
    if(strcmp(b.tip,"pol")==0){
        q[2]=b.x_or_r*cos(b.y_or_a);
        q[3]=b.x_or_r*sin(b.y_or_a);
    }
    if(strcmp(c.tip,"prm")==0){
        q[4]=c.x_or_r;
        q[5]=c.y_or_a;
    }
    if(strcmp(c.tip,"pol")==0){
        q[4]=c.x_or_r*cos(c.y_or_a);
        q[5]=c.x_or_r*sin(c.y_or_a);
    }
    double pa,pb,pc,p;
    pa=sqrt((q[2]-q[4])*(q[2]-q[4])+(q[3]-q[5])*(q[3]-q[5]));
    pb=sqrt((q[0]-q[4])*(q[0]-q[4])+(q[1]-q[5])*(q[1]-q[5]));
    pc=sqrt((q[2]-q[0])*(q[2]-q[0])+(q[3]-q[1])*(q[3]-q[1]));
    p=(pa+pb+pc)/2;
    return sqrt(p*(p-pa)*(p-pb)*(p-pc));
}

int main() {
    Point a,b,c;
    printf("A:\n");
    a=inputPoint();
    printPoint(&a);
    printf("B:\n");
    b=inputPoint();
    printPoint(&b);
    printf("C:\n");
    c=inputPoint();
    printPoint(&c);
    printf("\nS=%lf\n",plosha(a,b,c));
    return 0;
}
