#include<stdio.h>
FILE *datos;
FILE *resultados;
int main(){
int N=10, sem[N],edad[N],sem_[9];

int h,m,i,j;
int sexo[N];
float promedio[N],e,p=0;
//Para que lea los datos de otro archivo peviamente establecidos
datos=fopen("datos,ejercicio2.txt","r");
//Se inicio un ciclo para no tener que repetir tantas variables cuando pertenecen a lo mismo (los semestres)
for(i=0;i<N;i++){
	fscanf(datos,"%i", &edad[i]);
	e=e+edad[i];

	fscanf(datos,"%i", &sexo[i]);
	if(sexo[i]==0)++h;
	else if(sexo[i]==1)++m;

	fscanf(datos,"%i", &sem[i]);

	for(j=1;j<=9;j++){
   		if(sem[i]==j){
     		 sem_[j]++;
      		}
		}
	for(j=1;j<=9;j++){
   		if(sem[i]==0){
     		 sem_[j]++;
      		}
		}
fscanf(datos,"%f", &promedio[i]);
p=p+promedio[i];

}
//Cerrar el archivo una vez que ya haya leido todos los datos, se pone fuera del ciclo for para que se repita las 10 veces. Al dejarlo adentro solo me lee los datos del primer estudiante
fclose(datos);

resultados=fopen("resultados,ejercicio2.txt","w");
fprintf(resultados," %i son mujeres y %i son hombres\n",m,h);
e=e/10;
fprintf(resultados,"El promedio de las edades es %f\n", e);

for(j=1;j<=9;j++){
     		 printf("%i\n",sem_[j]);
      		}


//fprintf(resultados,"Alumnos en cada semestre; primero: %i, segundo: %i ,tercero: %i, cuarto: %i , quinto:%i ,sexto: %i , septimo: %i ,octavo: %i, noveno: %i \n", sem1,sem2,sem3,sem4,sem5,sem6,sem7,sem8,sem9);
p=p/9;
fprintf(resultados,"El promedio de calificación es: %f\n", p);
fclose(resultados);

return 0;
}

