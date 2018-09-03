/*Programa realizado el 03 de Septiembre de 2018 por Mariana Herrera*/
#include<stdio.h>
#include<math.h>
int main()
{
float exp_;
float log_;
float sin_;
float cos_;
float sqrt_;
int n=5,x;
for(x=0;x<n;x++){
exp_=exp(x);
printf("%i\t %f\n",x,exp_);
log_=log(x);
printf("%i\t %f\n",x,log_);
sin_=sin(x);
printf("%i\t %f\n",x,sin_);
cos_=cos(x);
printf("%i\t %f\n",x,cos_);
sqrt_=sqrt(x);
printf("%i\t %f\n",x,sqrt_);
}
return 0;
}
