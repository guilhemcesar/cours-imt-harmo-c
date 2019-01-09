#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include <stdbool.h>

int fact(int nb);
int cnp(int n, int p);

int main(){

    int n, p;
    printf("Entrer n et p :\nn=");
    scanf("%d", &n);
    printf("p = ");
    scanf("%d", &p);
    printf("%d parmis %d = %d",n ,p , cnp(n, p));

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

int cnp(int n, int p){
    return fact(n)/(fact(n-p)*fact(p));
}