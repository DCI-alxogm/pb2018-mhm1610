/*Este programa se creo el 20 de agosto de 2018 por Mariana Herrera*/
#include<math.h>
#include<stdio.h>
int main()
{
float x,y,z,r,o,e;
printf("Introduce el valor para x: \n");
scanf("%f", &x);
printf("Introduce el valor para y: \n");
scanf("%f", &y);
printf("Introduce el valor para z: \n");
scanf("%f", &z);
r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
o=acos(z/r);
e=atan(y/x);
x=r*sin(o)*cos(e);
y=r*sin(o)*sin(e);
z=r*cos(o);
printf("El primer resultado en coordenada esferica  es: %f \n",r);
printf("El segundo resultado en coordenada esferica  es: %f \n",o);
printf("El tercer resultado en coordenada esferica  es: %f \n",e);
printf("El primer resultado en coordenada cartesiana  es: %f \n",x);
printf("El segundo resultado en coordenada cartesiana es: %f \n",y);
printf("El tercer resultado en coordenada cartesiana es: %f \n",z);
return 0;

}
