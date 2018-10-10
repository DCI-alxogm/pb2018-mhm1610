//ejercicio 1 con argumentos de entrada pero sin argumentos de salida
#include<stdio.h>

void cuadrado(float x);
int main(){
return 0;
}
void cuadrado(float x){
	float x1,x2;
	printf("Introduzca el valor que quiere saber su cuadrado: \n");
	scanf("%f", &x1);
	x2=x1*x1;
	printf("El cuadraddo de %f es: %f\n", x1, x2);
	
}


