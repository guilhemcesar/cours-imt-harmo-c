#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

    float som = 0;

    for(int i =0 ; i<1000; i++){
        if(i%2 == 0) som = som + 1./(2*i + 1);
        else som = som - 1./(2*i + 1);
    }
    printf("pi = %f", 4*som);
}