//
//  main.cpp
//  CW12_10.1b
//
//  Created by Air on 02.11.2021.
//

#include <iostream>

struct ChessField{
    char hor;
    int vert;
};

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

int main() {
    struct ChessField chf1;
    chf1.hor='g';
    chf1.vert=5;
    printChess(chf1);
    struct ChessField chf2;
    inputChess(&chf2);
    printChess(chf2);
    return 0;
}
