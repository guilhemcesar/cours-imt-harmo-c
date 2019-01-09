#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {

    float abs;
    float ord;
}point;

void main(){

    point org;
    point pt;
    float rayon = 3000;
    float dslecercle = 0;

    org.abs = 0;
    org.ord = 0;

    for(int i = 0; i<rayon; i++){
        pt.ord = i;

        for(int j = 0; j<rayon; j++){
            pt.abs = j;

            if(sqrt( pow(org.abs-pt.abs,2) + pow(org.ord-pt.ord,2)) <= rayon) dslecercle++;
        }
    }
    printf("pi = %f", 4*dslecercle/(rayon*rayon));
}