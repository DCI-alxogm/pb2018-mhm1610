/*Programa realizado el 03 de Septiembre de 2018 por Mariana Herrera*/
#include<stdio.h>
#include<math.h>
FILE *resultados;
int main()
{
float exp_;
float log_;
float sin_;
float cos_;
float sqrt_;
int n,x;
printf("Inserte un valor para x: \n");
scanf("%f", &x);
printf("¿Cuantas veces quieres que se repita?: \n");
scanf("%i", &n);
for(x=0;x<n;x++){
exp_=exp(x);
resultados=fopen("resultados,ejercicio3.txt", "w");
fprintf(resultados,"%i\t %f\n",x,exp_);
log_=log(x);
fprintf(resultados,"%i\t %f\n",x,log_);
sin_=sin(x);
fprintf(resultados,"%i\t %f\n",x,sin_);
cos_=cos(x);
fprintf(resultados,"%i\t %f\n",x,cos_);
sqrt_=sqrt(x);
fprintf(resultados,"%i\t %f\n",x,sqrt_);
fclose(resultados);
}
return 0;
}
