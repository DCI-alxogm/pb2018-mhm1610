//ejercicio tipo float con argumentos de entrada pero sin argumentos de salida

#include<stdio.h>
float cuadrado(float h);
int main(){
return 0;
}
float cuadrado(float h){
	float x, x2;
	printf("Introduce un numero: \n");
	scanf("%f", &x);
	x2=cuadrado(x);
	printf("El cuadrado de %f es: %f\n", x, x2);
}
