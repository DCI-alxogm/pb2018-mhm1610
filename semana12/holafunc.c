//modificado el dia 31 de octubre 2018
#include <stdio.h>
#include "holamake.h" //libreria del usuario

void printholamake( ){
printf("Hola makefile....!\n");
}
void cuadrado(){
int a,b;
printf("Introduzca un numero para saber su cuadrado: \n");

scanf("%i",&a);

b=a*a;

printf("El cuadrado de %i es: %i \n",a,b);

return ;

}

