#include <stdio.h>
int main()
{
int inicial,final;
int i, a, j;
printf("Inserta un número inicial: \n");
scanf("%i", &inicial);
printf("Inserta un número final: \n");
scanf("%i", &final); 

for (int j=inicial;j<=final;j++){//por definicion el 1 no es primo, se empieza en 2
 int a=0;
 for(int i=1;i<=100;i++)//divide a j entre los números de inicial al final
 {
     if(j%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
     a++;
 }
 if (a==2){ //si solo tiene dos números divisores entonces es primo y se imprime
 printf("%d, ", j);
 }
 }
}
