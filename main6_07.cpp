//
//  main.cpp
//  CW8_6.07
//
//  Created by Air on 17.10.2021.
//

#include <iostream>

int main() {
    unsigned M=(1<<24)+(2<<16)+(3<<8)+4;
    unsigned a1=M & 0xFF;
    unsigned a2=(M & 0xFF00)>>8;
    
    if ((a1==4)&&(a2==3)){
        printf("little");
    }
    else if ((a1==4)&&(a2==2)){
        printf("middle");
    }
    else if (a1==1){
        printf("big");
    }
    else{
        printf("unknown");
    }
}
