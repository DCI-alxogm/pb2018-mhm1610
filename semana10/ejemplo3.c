//Hecho el 17 de octubre de 2018//
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

printf("El programa que estas ejecutando es: %s\n", argv[0]);

char *nombre_archivo;
float Tin, Tfin; //temperatura inicial, temperatura final//
int num;
FILE *fp;

if(argc==5){
	Tin=atof(argv[1]);
	Tfin=atof(argv[2]);
	num=atoi(argv[3]);
	nombre_archivo=argv[4];
	printf("El nombre del archivo a abrir es:%s\n",nombre_archivo);
	fp=fopen(nombre_archivo,"w+");
	fprintf(fp,"Tin: %f, \t Tfin: %f, \t, N: %i",Tin,Tfin,num);
	//Aqui se coloca las demas acciones que se quieran realizar//
	fclose(fp);
}
else if(argc>5){
	printf("Diste mas argumentos de los necesarios \n");
}
else{
	printf("Se requieren 4 argumentos. Tin, Tfin, num, nombre_archivo");
}
return 0;
}
