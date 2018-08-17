/*Creado el 16 de Agosto de 2018 por Mariana Herrera*/
#include<stdio.h>

int main()
{
float a,b,c,d,e1,e2,e3,e4;
printf("Introduzca un numero: \n");
scanf("%f",&a);


printf("Introduzca un segundo numero: \n");
scanf("%f",&b);


printf("Introduzca un tercer numero: \n");
scanf("%f",&c);


printf("Introduzca un cuarto numero: \n");
scanf("%f",&d);
e1=(a+b)*c/d;
e2=((a+b)*c)/d;
e3=(a+b)*c/d;
e4=a+(b*c)/d;


printf("La respuesta de e=(a+b)*c/d es: %f \n",e1);
printf("La respuesta de  e=((a+b)*c)/d es: %f \n",e2);
printf("La respuesta de  e=(a+b)*c/d es: %f \n",e3);
printf("La respuesta de  e=a+(b*c)/d es: %f\n",e4);
return 0;

}

