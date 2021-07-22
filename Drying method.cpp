#include <iostream>
#include <stdio.h>
#include <math.h>

// BY BLADIMIR LOPEZ

int main(int argc, char** argv) {
	float p0, p1, p, fp, tol, q0, q1; int iteraciones,i=2;
	printf("      -----------------------------------------------------------------------\n");
	printf("                                      BIENVENIDO\n");
	printf("                                 METODO DE LA SECANTE\n");
	printf("      -----------------------------------------------------------------------\n\n");
	printf("      >> Funcion: f(x)= x^3 + 4x^2 - 10\n\n");
    printf("      Ingrese Tolerancia: ");scanf("%f",&tol);
	printf("      Ingrese P0 (valor semilla): ");scanf("%f",&p0);
	printf("      Ingrese P1 (valor semilla): ");scanf("%f",&p1);
	printf("      Ingrese numero de iteraciones: ");scanf("%d",&iteraciones);
    printf("\n      i       p0          q0          p1          q1          p          f(p)\n");
    
    q0 = pow(p0,3)+4*pow(p0,2)-10;
    q1 = pow(p1,3)+4*pow(p1,2)-10;
    
    while(i <= iteraciones){
    	p = p1 - q1*(p1-p0)/(q1-q0);
    	fp = pow(p,3)+4*pow(p,2)-10;
    	printf("      %d   %f   %f    %f    %f    %f    %f ",i,p0,q0,p1,q1,p,fp);
    	if(fabs(p-p1) < tol){
    		printf("\n      EXITO EN LA %d ITERACION, P = %f \n\n",i,p);
			system("pause");
			exit(-1);
		}
		i++;
		p0=p1;
		q0=q1;
		p1=p;
		q1=fp;
	}
	printf("El metodo fallo despues de %d iteraciones",i);
	return 0;
}
