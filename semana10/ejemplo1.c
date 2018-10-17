//Creado el 17 de octubre 2018//
#include<stdio.h>
int main(int argc, char *argv[]){

printf("El programa que estas ejecutando es: %s\n", argv[0]);

if (argc==2){
	printf("El argumento que se dio es: %s\n", argv[0]);
}
else if(argc>2){
	printf("Mas argumentos de los necesarios \n");
}
else{
	printf("Se requiere de al menos 1 argumento\n");
}
return 0;
}
