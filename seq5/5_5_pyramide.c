#include <stdio.h>
#include <stdlib.h>

void main(){

    for ( int i=0; i<10; i++){                          // 1 tour, une ligne
        for(int j=(9-i); j>0; j--) printf("  ");        //espaces
        for (int j=1; j<i; j++) printf("%d ",j);        //chiffres croissants
        for (int j=i; j>0; j--) printf("%d ",j);        //chiffres decroissant
        printf("\n");
    }

}