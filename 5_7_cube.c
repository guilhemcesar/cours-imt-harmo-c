#include <stdio.h>
#include <stdlib.h>

void main(){

    int nb = 0;
    int c = 0;
    int d = 0;
    int u = 0;

    for (int i = 0; i <= 999; i++){

        c = i / 100;
        d = (i/10)-10*c;
        u = i -10*d - 100*c;

        if( i == (c*c*c)+(d*d*d)+(u*u*u)) nb++;
    }

    printf("Il y a %d nombre compris entre 1 et 1000 egaux a la somme des chiffres de leurs cubes", nb);

}