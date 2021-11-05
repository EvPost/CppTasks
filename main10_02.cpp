//
//  main.cpp
//  CW12_10.02
//
//  Created by Air on 04.11.2021.
//

#include <iostream>

typedef struct ChessField{
    char hor;
    int vert;
}ChessField;

void inputChess(ChessField* chf){
    do{
        printf("input (abcdefgh):");
        scanf("%s", &chf->hor);
    }while(chf->hor>'n'||chf->hor<'a');
    do{
        printf("input (12345678):");
        scanf("%d",&chf->vert);
    }while(chf->vert>8||chf->vert<1);
}

void printChess(ChessField chf){
    printf("%c%d\n", chf.hor,chf.vert);
}

bool check(ChessField x,ChessField y){
    if(x.hor ==y.hor)return true;
    if(x.vert ==y.vert)return true;
    if(x.hor-x.vert ==y.hor-y.vert)return true;
    return false;
}

int main() {
    ChessField chf1;
    ChessField chf2;
    inputChess(&chf1);
    inputChess(&chf2);
    printChess(chf1);
    printChess(chf2);
    if (check(chf1,chf2)){
        printf("ferz hodit\n");
    }
    return 0;
}

