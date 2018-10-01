#include <stdio.h>
#include <math.h>

int main()
{
//declaracion de las variables que usare//
int n=15000,i,a;
double vx0,vy0,vz0,r;
double vx[n],vy[n],vz[n],x[n],y[n],z[n];
double x0, y0, z0;
double G=39.478;
double h=0.0001; 
FILE *datos;
FILE *resultados;

//Introduccion a que es el programa//
printf("Este programa te ayudara a conocer las orbitas de los planetas \n");


//conocer el planeta de interes del usuario//
printf("Introduzca cual orbita del planeta quiere saber: \nmercury[1], \nvenus[2], \nearth[3], \nmars[4], \njupiter[5], \nsaturn[6], \nuranus[7], \nneptune[8], \npluton[9]\n");

scanf("%i",&a);

//Para el planeta venus//
if (a==1)
{

	//leer los datos de un archivo de texto previamente establecido//
	datos=fopen("mercury.txt", "r");

      fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0,&y0,&z0,&vx0,&vy0,&vz0);

	fclose(datos);

        x[0]=x0; 
	y[0]=y0;
	z[0]=z0;
	vx[0]=vx0*365.242;
	vy[0]=vy0*365.242;
	vz[0]=vz0*365.242;

  	resultados=fopen("resultadosmercury.txt", "w");

	//Inician las operaciones obtenidas de la presentacion//
 
	for(i=1;i<=n;i++){  

   	r = sqrt((x[i-1]*x[i-1])+(y[i-1]*y[i-1])+(z[i-1]*z[i-1]));


   	x[i]=x[i-1]+vx[i-1]*h;

   	y[i]=y[i-1]+vy[i-1]*h;

   	z[i]=z[i-1]+vz[i-1]*h;

  	vx[i] = vx[i-1]-h*((G*x[i-1])/(r*r*r));
  
   	vy[i] = vy[i-1]-h*((G*y[i-1])/(r*r*r));
  
   	vz[i] = vz[i-1]-h*((G*z[i-1])/(r*r*r));

   	fprintf(resultados, "%lf, %lf, %lf, %lf, %lf, %lf\n", x[i],y[i],z[i],vx[i],vy[i],vz[i]);

  }
  
   fclose(resultados);
       
    } 
//Para el planeta venus//
if (a==2)
{

	//leer los datos de un archivo de texto previamente establecido//
	datos=fopen("venus.txt", "r");

      fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0,&y0,&z0,&vx0,&vy0,&vz0);

	fclose(datos);

        x[0]=x0; 
	y[0]=y0;
	z[0]=z0;
	vx[0]=vx0*365.242;
	vy[0]=vy0*365.242;
	vz[0]=vz0*365.242;

  	resultados=fopen("resultadosvenus.txt", "w");

	//Inician las operaciones obtenidas de la presentacion//
 
	for(i=1;i<=n;i++){  

   	r = sqrt((x[i-1]*x[i-1])+(y[i-1]*y[i-1])+(z[i-1]*z[i-1]));


   	x[i]=x[i-1]+vx[i-1]*h;

   	y[i]=y[i-1]+vy[i-1]*h;

   	z[i]=z[i-1]+vz[i-1]*h;

  	vx[i] = vx[i-1]-h*((G*x[i-1])/(r*r*r));
  
   	vy[i] = vy[i-1]-h*((G*y[i-1])/(r*r*r));
  
   	vz[i] = vz[i-1]-h*((G*z[i-1])/(r*r*r));

   	fprintf(resultados, "%lf, %lf, %lf, %lf, %lf, %lf\n", x[i],y[i],z[i],vx[i],vy[i],vz[i]);

  }
  
   fclose(resultados);
       
    } 

//Para el planeta tierra//
if (a==3)
{

	//leer los datos de un archivo de texto previamente establecido//
	datos=fopen("datos.txt", "r");

      fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0,&y0,&z0,&vx0,&vy0,&vz0);

	fclose(datos);

        x[0]=x0; 
	y[0]=y0;
	z[0]=z0;
	vx[0]=vx0*365.242;
	vy[0]=vy0*365.242;
	vz[0]=vz0*365.242;

  	resultados=fopen("resultadostierra.txt", "w");

	//Inician las operaciones obtenidas de la presentacion//
 
	for(i=1;i<=n;i++){  

   	r = sqrt((x[i-1]*x[i-1])+(y[i-1]*y[i-1])+(z[i-1]*z[i-1]));


   	x[i]=x[i-1]+vx[i-1]*h;

   	y[i]=y[i-1]+vy[i-1]*h;

   	z[i]=z[i-1]+vz[i-1]*h;

  	vx[i] = vx[i-1]-h*((G*x[i-1])/(r*r*r));
  
   	vy[i] = vy[i-1]-h*((G*y[i-1])/(r*r*r));
  
   	vz[i] = vz[i-1]-h*((G*z[i-1])/(r*r*r));

   	fprintf(resultados, "%lf, %lf, %lf, %lf, %lf, %lf\n", x[i],y[i],z[i],vx[i],vy[i],vz[i]);

  }
  
   fclose(resultados);
       
    } 
 
  return 0; //finalizacion del programa//

}

