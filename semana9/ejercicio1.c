//Ejercicio empezado el 08 de octubre 2018 por Mariana Herrera Mosqueda//

#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *datos; //para abrir mi archivo donde estan mis datos ya establecidos 
int i,num,o;
float varx,vary,varz; //float porque son decimales mis variables
num = 0;


printf("Escribe el numero de datos que existen en tu archivo: \n");
scanf("%d",&num);

float *ptr= (float*)malloc(num*sizeof(float)); //se reserva la memoria que quiero ocupar

datos=fopen("maximo.txt","r"); //mi archivo de texto
for (i=0;i<num;i++){
	fscanf(datos,"%f\n",&ptr[i]);


if (i==1){
	varx=ptr[i-1];
	vary=ptr[i];
if(vary<=varx)
	varz=varx;
else 
	varz=vary;
}
if(i>1)
	vary=ptr[i];
if(varz<vary)
	varz=vary;
else
	varz=varz;
}
fclose(datos);

printf("El numero mayor en el archivo es: %f\n",varz);
free(ptr);
return 0;
}

