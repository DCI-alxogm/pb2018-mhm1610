/*Trabajo creado el 22 de Agosto de 2018 por Mariana Herrera*/
#include<stdio.h>
#include <stddef.h>

int main(){
int a;
printf("Introduce un numero: \n");
scanf("%i",&a);
if(a%2==0){
printf(" a=%i es par\n",a);
}else{
printf(" a=%i es impar\n",a);
}
return 0;
}
