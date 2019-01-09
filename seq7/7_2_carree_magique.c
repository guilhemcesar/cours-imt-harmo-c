#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 7


void main(){

    int carre[MAX][MAX];
    int i, j, k, som;

    for(i = 0; i<MAX; i++){
        for(j = 0; j<MAX; j++) carre[i][j] = 0;     //initialisation du tableau a 0
    }

    i = 1;                //initialisation des indices pour tomber dans la premier case des le premier tour de boucle
    j = MAX/2-1;

    for(k = 1; k<=MAX*MAX; k++){     //cette boucle donne les numero au case une par une               

        j = (j+1)%MAX;
        i = (i-1+MAX)%MAX;          // les bord du torre st gerer avec des %
        if(carre[i][j] != 0){       //cas ou la case suivante a deja ete faite
            i = (i+2)%MAX;
            j = (j-1+MAX)%MAX;
        }

        carre[i][j] = k;               //affectation de la valeur
    }

    for(i = 0; i<MAX; i++){             //affichage du carre
        for(j = 0; j<MAX; j++) printf("%d ",carre[i][j]);
        printf("\n");
    }

    for(i = 0; i<MAX; i++){             //affichage somme ligne
        som = 0;
        for(j = 0; j<MAX; j++) som+=carre[i][j];
        printf("somme ligne %d = %d\n",i ,som);
    }

    for(j = 0; j<MAX; j++){             //affichage somme colonne
        som = 0;
        for(i = 0; i<MAX; i++) som+=carre[i][j];
        printf("somme colonne %d = %d\n",j ,som);
    }
}