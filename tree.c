#include <stdio.h>
#include <stdlib.h>

int main(){
        int i,j,k,z,row;
        printf("Podaj liczbe pieter\n");
        scanf("%d",&row);
        for (i = 0; i < row; i++) {
            int space = row-1;
            for(j=0;j<space;j++) {
                printf(" ");
            }
            for(k=0;k<(i*2+1);k++){
                printf("*");
            }
            printf(" \n");
            }
        for(z=0;z<(row-1);z++){
            printf(" ");
        }
        printf("**\n");
        printf("komentarz");
    return 0;
}
