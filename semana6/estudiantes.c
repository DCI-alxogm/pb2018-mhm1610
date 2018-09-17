#include<stdio.h>

int main(){
int N=10, sem[N],edad[N],sem1=0, sem2=0, sem3=0, sem4=0, sem5=0, sem6=0, sem7=0, sem8=0, sem9=0;

int h,m,i;
int sexo[N];
float promedio[N],e,p=0;

for(i=0;i<N;i++){
printf("Edad: \n");
scanf("%i", &edad[i]);
e=e+edad[i];
printf("Sexo, hombre 0 y mujer 1: \n");
scanf("%i", &sexo[i]);
if(sexo[i]==0)++h;
else if(sexo[i]==1)++m;
printf("Semestre (1-9): \n");
scanf("%i", &sem[i]);
if(sem[i]==1)++sem1;
else if(sem[i]==2)++sem2;
else if(sem[i]==3)++sem3;
else if(sem[i]==4)++sem4;
else if(sem[i]==5)++sem5;
else if(sem[i]==6)++sem6;
else if(sem[i]==7)++sem7;
else if(sem[i]==8)++sem8;
else if(sem[i]==9)++sem9;
printf("Promedio: \n");
scanf("%f", &promedio[i]);
p=p+promedio[i];
}

printf(" %i son mujeres y %i son hombres\n",m,h);
e=e/10;
printf("El promedio de las edades es %f\n", e);
printf("Alumnos en cada semestre; primero: %i, segundo: %i ,tercero: %i, cuarto: %i , quinto:%i ,sexto: %i , septimo: %i ,octavo: %i, noveno: %i \n", sem1,sem2,sem3,sem4,sem5,sem6,sem7,sem8,sem9);
p=p/9;
printf("El promedio de calificación es: %f\n", p);

return 0;



}

