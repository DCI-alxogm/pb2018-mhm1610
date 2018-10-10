//ejercicio 1 con argumentos de salida pero sin argumentos de entrada
#include<stdio.h>

int cuadrado();
int main(){
return 0;
}
int cuadrado(){
	float x1,x2;
	printf("Introduzca el valor que quiere saber su cuadrado: \n");
	scanf("%f", &x1);
	x2=x1*x1;
	printf("El cuadraddo de %f es: %f\n", x1, x2);
	
}

