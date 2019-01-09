#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float a = 0;
    float b = 0;
    float c = 0;
    float x1 = 0;
    float x2 = 0;
    int code = 1;

    printf("Soit ax²+bx+v = 0 un polynome\nEntrer a, b et c\na = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);


    if( a == 0){
        if( b == 0){
            if( c == 0){
                code = 3; // infinité de solutions
            }
            else code = 0; // pas de solutions réeles
        }
        else{
            code = 1; // Une solution
            x1 = -c/b;
        }
    }
    else{

        float delta = b*b - 4*a*c;

        if(delta > 0){
            code = 2;//    Deux solutions
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
        }
        else if( delta == 0){
            code = 1;//    Une solution
            x1 = -b/a;
        }
        else code = 0;//    Pas de solution ds R
    }



    switch(code){

    case 0 :
        printf("Le polynome n'a pas de solutions réeles");
        break;
    case 1 :
        printf("Le polynome a une solution réelle\nx = %f", x1);
        break;
    case 2 :
        printf("Le polynome a deux solution réelles\nx1 = %f\nx2 = %f",x1 ,x2);
        break;
    case 3 :
        printf("Le polynome a une infinitée de solutions");
        break;
    }

}