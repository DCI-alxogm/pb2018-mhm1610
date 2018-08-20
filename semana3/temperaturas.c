/*Creado el 20 de agosto 2018 por Mariana Herrera*/
#include<stdio.h>
   int main()
{
float c,k,f,K,F,C;
printf("Introduzca los grados °C para obtener k y °F: \n");
scanf("%f",&c);

K=c+273.15;
F=(1.8*c)+32;
C=(F-32)/1.8;

printf("La temperatura en K es: %f \n",K);
printf("La temperatura en °F es: %f \n",F);
printf("La temperatura en °C es: %f \n",C);
return 0;

}


