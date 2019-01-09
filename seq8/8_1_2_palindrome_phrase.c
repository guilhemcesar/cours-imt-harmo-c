#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include <stdbool.h>

void main(){
     char phr[256];
     printf("Entrer une phrase : ");
     gets(phr);

     int taille  = strlen(phr);
     bool pal = true;

     for(int i = 0, j = taille-1; phr[i]; i++, j--){
        if(phr[i] == ' ') i++;
        if(phr[j] == ' ') j--;
        if(phr[i] != phr[j]) pal = false;
     }

     if(pal) printf("%s est un palyndrome", phr);
     else printf("%s n'est pas un palyndrome", phr);
}