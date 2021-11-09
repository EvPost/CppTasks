//
//  main.c
//  CW14_11.3e
//
//  Created by Air on 09.11.2021.
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isFibonacci(int  w)
{
       double X1 = 5 * pow(w, 2) + 4;
       double X2 = 5 * pow(w, 2) - 4;

       long X1_sqrt = (long)sqrt(X1);
       long X2_sqrt = (long)sqrt(X2);

       return (X1_sqrt*X1_sqrt == X1) || (X2_sqrt*X2_sqrt == X2) ;
}

int main() {
    const char* fname="F.dat";
    FILE* F=fopen(fname, "wb");
    if(F==NULL){
        fprintf(stderr, "Error open file %s",fname);
        return -1;
    }
    int n;
    printf("n=");
    scanf("%d",&n);
    double x;
    for(int i=0;i<n;i++){
        printf("x=");
        scanf("%lf",&x);
        fwrite(&x, sizeof(x), 1, F);
    }
    fclose(F);
    double a;
    printf("a=");
    scanf("%lf",&a);
    F=fopen(fname, "rb");
    double mas[10];
    const char* fname2="G.dat";
    FILE* G=fopen(fname2, "wb");
    int i=0;
    int k=0;
    while (1) {
        if(feof(F))break;
        fread(&x,sizeof(x),1,F);
        if (isFibonacci(x)){
            fwrite(&x, sizeof(x), 1, G);
        }
        else{
            mas[k++]=x;
        }
        i++;
    }
    fclose(F);
    fclose(G);
}
