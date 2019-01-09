#include <stdio.h>
#include <stdlib.h>

void main(){

    int nb = 0;
    int som = 0;

    printf("Entrer un nombre ");
    scanf("%d", &nb);

    for( int i =1; i <nb; i++){
        if( nb % i == 0 ){
            som = som + i;
        }
    }
    if (som != nb) printf("Le nombre n'est pas parfait");
    else printf("Le nombre est parfait");
}