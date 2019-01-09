#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include <stdbool.h>

void main(){

    char mot[256];
    bool pal = true;

    printf("Entrer un mot : ");
    scanf("%s", mot);

    int taille = strlen(mot);

    for( int i = 0; i< taille/2; i++) if(mot[i] != mot[taille-i-1]) pal = false;

    if(pal) printf("%s est un palyndrome", mot);
    else printf("%s n'est pas un palyndrome", mot);
}