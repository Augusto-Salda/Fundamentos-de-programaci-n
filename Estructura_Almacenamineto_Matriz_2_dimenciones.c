

#include<stdio.h>
#include<stdlib.h>

int main(){
 int arreglo[3][3],arreglo2[3][3],arreglo3[3][3],x=0,y=0;
 printf("Ingrese datos de arreglo 1");
 printf("\n");
 for(x=0;x<3;x++){
  for(y=0;y<3;y++){
   printf("Fila y columna: [%d][%d]:",x,y);
   scanf("%d",&arreglo[x][y]);
  }
 }
 system("cls");
 printf("Ingrese datos de arreglo 2");
 printf("\n");
 for(x=0;x<3;x++){
  for(y=0;y<3;y++){
   printf("Fila y columna: [%d][%d]:",x,y);
   scanf("%d",&arreglo2[x][y]);
   arreglo3[x][y]=arreglo[x][y]+arreglo2[x][y];
  }
 }
 system("cls");
 printf("\n\n Matriz 1\n");
 for(x=0;x<3;x++){
  for(y=0;y<3;y++){
   printf("%d\t",arreglo[x][y]);
  }
   printf("\n");
 }
 printf("\n\n Matriz 2\n");
 for(x=0;x<3;x++){
  for(y=0;y<3;y++){
   printf("%d\t",arreglo2[x][y]);
  }
   printf("\n");
 }
 printf("\n\n Matriz 3\n");
 for(x=0;x<3;x++){
  for(y=0;y<3;y++){
   printf("%d\t",arreglo3[x][y]);
  }
   printf("\n");
 }
 system("pause");
 return 0;
}




