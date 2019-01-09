#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include <stdbool.h>

double rho(double x,double y);
double theta(double x,double y);
double x(double rho,double theta);
double y(double rho,double theta);

int main(){

    double varx, vary, varrho, vartheta;

    printf("Entrer x et y :\nx = ");
    scanf("%lf", &varx);
    printf("y = ");
    scanf("%lf", &vary);

    printf("rho = %lf\ntheta = %lf\n",rho(varx ,vary) ,theta(varx ,vary));


    printf("Entrer rho et theta :\nrho = ");
    scanf("%lf", &varrho);
    printf("theta = ");
    scanf("%lf", &vartheta);

    printf("x = %lf\ny = %lf",x(varrho, vartheta) ,y(varrho, vartheta));
    return 0;
}

double rho(double varx,double vary){
    return sqrt(varx*varx+vary*vary);
}

double theta(double varx,double vary){
    return atan(vary/varx);
}

double x(double varrho,double vartheta){
    return varrho * cos(vartheta);
}

double y(double varrho,double vartheta){
    return varrho * sin(vartheta);
}