#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

void main(){

    int ligne[MAX], ligneSup[MAX];
    int i, j;

    for(i = 0; i<10; i++) ligne[i] = ligneSup[i] = 0;

    ligneSup[0] = 1;

    for (i = 0; i<MAX; i++){

            for(j = 1; j<MAX; j++){
                ligne[j]= ligneSup[j] + ligneSup[j-1];
                if(ligne[j] != 0)  printf("%d ",ligne[j]);
            }
            printf("\n");
            for(j = 0; j<MAX; j++)ligneSup[j] = ligne[j];
    }
}