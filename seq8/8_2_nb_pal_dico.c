#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include <stdbool.h>

void main(){

    FILE *fp = fopen("dico.txt","r");
    char mot[256];
    bool pal;
    int taille;
    int nbpal = 0;

    for(int i = 0; i < 338088; i++){
        fscanf(fp, "%s", mot);
        taille = strlen(mot);
        pal = true;

        for(int j = 0; mot[j]; j++) if(mot[j] != mot[taille-1-j]) pal = false;

        if(pal) {
            printf("%s est un palyndrome\n", mot);
            nbpal++;
        }
    }
    printf("Il y a %d palyndrome dans ce dictionnaire", nbpal);
    fclose(fp);
}
