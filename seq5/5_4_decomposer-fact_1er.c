#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    int nb = 0;
    printf("Entrer un nombre ");
    scanf("%d", &nb);

    for (int i = 1; i<nb; i++){
        if( nb%i == 0) printf("%d est un facteur premier de %d\n", i, nb);
    }
}