#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include <stdbool.h>

void equation(double a,double b,double c,double *x,double *y,int *pcode);

double aa,bb,cc,x,y;
int c;

int main() {

    printf("ax² + bx + c = 0 une equation, Entrer a, b et c");
    scanf("%lg",&aa);
    scanf("%lg",&bb);
    scanf("%lg",&cc);

    equation(aa,bb,cc,&x,&y,&c);

    switch (c) {
    case '0' :
        printf("Pas de solution");
        break;
    case '1' :
        printf("Une solution a cette equation, x = %lf", x);
        break;
    case '2' :
        printf("L'equation a 2 racine\x1 = %lf\nx2 = %lf", x, y);
        break;
    case '3' : 
        printf("L'equation a une infinité de solution");
        break;
    default :
        printf("pb");
    }
    return 0;
}

void equation(double a,double b,double c,double *x,double *y,int *pcode){
    if(a == 0){
        if(b == 0){
            if(c == 0) *pcode = 3;
            else *pcode = 0;
        }else {
            *pcode = 1;
            *x = -c/b;
        }
    }else{

        int delta = b*b-4*a*c;

        if(delta > 0){
            *x = (-b + sqrt(delta)) / (2*a);
            *y = (-b - sqrt(delta)) / (2*a);
            *pcode = 2;
        }else if (delta == 0){
            *x = -b/a;
            *pcode = 1;
        }else *pcode = 0;
    }
}