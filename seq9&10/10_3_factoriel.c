#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include <stdbool.h>

int fact(int nb);

int main(){

    int nb;
    printf("Entrer un nombre : ");
    scanf("%d", &nb);
    printf("%d! = %d",nb ,fact(nb));

    return 0;
}

int fact(int nb){
    if(nb != 0){
        int res = 1;
        for(int i = 1; i <= nb; i++){
            res *= i;
        }
        return res;
    }
    else return 1;
}