/*05 de Sepriembre 2018*/
#include<stdio.h>
int main()
{
float temp_c, temp_k;
float delta, n;
int i;
printf("Inserte el valor inicial: \n");
scanf("%f", &temp_c);
printf("Inserte el valor final: \n");
scanf("%f", &temp_k);
printf("Insertar un espaciador: \n");
scanf("%f", &n);
delta=(temp_k-temp_c);
for(i=0;i<n;i++){
temp_k=temp_c+273.15;
printf("%f %f\n", temp_c, temp_k);
temp_c=temp_c+delta;
}
return 0;
}






















