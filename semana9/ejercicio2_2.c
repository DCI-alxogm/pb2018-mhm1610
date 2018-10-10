//ejercicio tipo float con argumentos de salida pero sin argumentos de entrada
#include<stdio.h>
float cuadrado();
int main(){
return 0;}
float cuadrado(){
	float x, x2;
	printf("Introduce un numero: \n");
	scanf("%f", &x);
	x2=cuadrado(x);
	printf("El cuadrado de %f es: %f\n", x, x2);

}
