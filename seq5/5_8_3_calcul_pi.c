#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    float som = 0;
    for (float i = 1; i <= 100000; i++) som = som + 1/(i*i);
    printf("pi = %f", sqrt(6*som));
}