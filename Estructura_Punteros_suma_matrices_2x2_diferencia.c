#include <stdio.h>
#include <stdlib.h>
int main(){
        int arreglo[3][3],x=0,y=0;
        int *p;
 printf("Ingrese datos de arreglo 1");
 printf("\n");
 for(x=0;x<3;x++){
  for(y=0;y<3;y++){
   printf("Fila y columna: [%d][%d]:",x,y);
   scanf("%d",&arreglo[x][y]);
  }
 } 
 printf("\n------------\n");
 for(x=0;x<3;x++){
  for(y=0;y<3;y++){
 *p = arreglo[x][y]+arreglo[x][y];
 printf("En la posición [%d][%d] la suma de su mismo valor es %d\n",x,y,*p);
   }
 }
 printf("\n Segundo arreglo \n");
 int arreglo2[3][3],u=0,v=0;
        int *t;
 printf("Ingrese datos de arreglo 2");
 printf("\n");
 for(u=0;u<3;u++){
  for(v=0;v<3;v++){
   printf("Fila y columna: [%d][%d]:",u,v);
   scanf("%d",&arreglo2[u][v]);
  }
 }
 printf("\n------------\n"); 
 for(u=0;u<3;u++){
  for(v=0;v<3;v++){
 *t = arreglo2[u][v]+arreglo2[u][v];
 printf("En la posición [%d][%d] la suma de su mismo valor es %d\n",u,v,*t);
   }
 }
 printf("\n------------\n");
 
  printf("La diferencia en la última posición en el primer arreglo y el 2 arreglo es: %d\n",*p-*t);
   
} 

