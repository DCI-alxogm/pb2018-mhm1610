/*10 de septiembre 2018*/
#include<stdio.h>
int main (){
int N=10;
int i;
float numeros[10];

for (i=0; i<N; i++){
numeros[i]=0;
} 

for(i=0; i<N; i++){
scanf("%f", &numeros[i]);
}

for(i=0; i<N; i++){
printf("%f", &numeros[i]);
}
return 0;
}
