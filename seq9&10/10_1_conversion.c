#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void cartpol(double x, double y, double *rho, double *theta){
    *rho = sqrt(x*x+y*y);
    *theta = atan(y/x);
}


void poltocar(double rho, double theta, double *x, double *y){
    *x = rho * cos(theta);
    *y = rho * sin(theta);
}

int main(){

    double x, y, rho, theta;

    printf("Entrer x et y :\nx = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    
    cartpol(x, y, &rho, &theta);

    printf("rho = %lf\ntheta = %lf rad\n",rho ,theta);


    printf("Entrer rho et theta :\nrho = ");
    scanf("%lf", &rho);
    printf("theta = ");
    scanf("%lf", &theta);

    poltocar(rho, theta, &x, &y);

    printf("x = %lf\ny = %lf",x ,y);
    return 0;
}
