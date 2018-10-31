#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int n,i,j,N,m=0;
 float l[4];
char nombre[20];
double e=0.000001,p=0;	
FILE *datos;
datos=fopen("datos.txt","r");
fscanf(datos,"%d",&n);
N=n*n;
n=n+2;


for(int k=0;k<4;k++){
	                      fscanf(datos,"%f",&l[k]);
	                      }
	  fclose(datos);

	double **T = (double**)malloc(n*sizeof(float*));
	  for(i=0;i<=n;i++){

	   T[i]=(double*)malloc(n*sizeof(float));
				}
		           for(j=0;j<=n;j++){
			                    T[i][j]=0;
			                    T[i][j]=0;
		                            }
	                   
	  for(i=1;i<n-1;i++){
			    T[i][0]=l[3];
			    T[i][n-1]=l[1];
                            }
	  for(j=1;j<n-1;j++){
			    T[0][j]=l[0];
			    T[n-1][j]=l[2];
                            }
 
          do{
	    for(j=1;j<n-1;j++){
	  	              for(i=1;i<n-1;i++){		
	  	                                T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
	  	                                T[i][j]=(1.5*T[i][j])-(0.5*T[i][j]);
	  	                                p=0;
	  	                                if(sqrt(pow((T[i][j]-T[i][j])/T[i][j],2))*100>p){
	  	                                                                  p=sqrt(pow((T[i][j]-T[i][j])/T[i][j],2))*100;
	  	                                                                                 }
	  	                                T[i][j]=T[i][j];
	  	                                }
	                      }
	  sprintf(nombre, "%dresultados.txt",m);
	  FILE *df;
	  if(p>e){
	         df=fopen(nombre,"w");
	         }
	  else{
	      df=fopen("Equilibrio.txt","w");
	      }
	  fprintf(df,"Las temperaturas son: \n");
	  for(j=n-2;j>0;j--){
	  	            for(i=1;i<n-1;i++){
	  		                      fprintf(df,"%f\t",T[i][j]);
	  	                              }
	  	            fprintf(df,"\n");
	                    }
          fclose(df);
          m++;
          }while(p>e);
          printf("  %d\n",m);
          return 0;
	free(T);

	}
