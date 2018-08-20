/*Programa creado el 20 de agosto 2018 por Mariana Herrera*/
#include<math.h>
#include<stdio.h>
int main()
{
float x,y1,y2,y3;
printf("Introduce el valor para x: \n");
scanf("%f",&x);

y1=exp(x);
y2=cos(x)+2*(tan(x/2));
y3=log(x)+3*(x*x);
printf("El resultado de la primera funcion es: %f \n",y1);
printf("El resultado de la segunda funcion es: %f \n",y2);
printf("El resultado de la tercera funcion es: %f \n",y3);
return 0;

}

