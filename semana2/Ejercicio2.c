/*Creado el 16 de Agosto de 2018 por Mariana Herrera*/
#include<stdio.h>

int main()
{
int a,b,c,d,e1,e2,e3,e4;
printf("Introduzca un numero: \n");
scanf("%i",&a);


printf("Introduzca un segundo numero: \n");
scanf("%i",&b);


printf("Introduzca un tercer numero: \n");
scanf("%i",&c);


printf("Introduzca un cuarto numero: \n");
scanf("%i",&d);
e1=(a+b)*c/d;
e2=((a+b)*c)/d;
e3=(a+b)*c/d;
e4=a+(b*c)/d;
printf("La respuesta de  e1=(a+b)*c/d es: %i \n",e1);
printf("La respuesta de  e2=((a+b)*c)/d  es: %i \n",e2);
printf("La respuesta de  e3=(a+b)*c/d es: %i \n",e3);
printf("La respuesta de  e4=a+(b*c)/d es: %i \n",e4);
return 0;

}
