#include <stdio.h>
int main () {
int var=20; /*declaracion de la variable*/
int *ip; /*declaracion de la variable apuntador*/
ip=&var;  /*asigna la direccion de la variable var al apuntador ip*/

printf("la direccion de la variable var es: %x\n", (int) &var);
printf("direccion guardada en el apuntador ip: %x?n", (int) ip);
printf("el valor de *ip: %d?n", *ip);
return 0;
}
