#include<stdio.h>
 #include <stdlib.h>
 
  int main(){
 
  float arreglo1[5],arreglo2[5],arreglo3[5];
  int i = 0;
  for(i=0;i<5;i++){
    printf("introduce 5 valores para el primer arreglo: \t ");
    scanf("%f",&arreglo1[i]);
        }
  printf("------------\n");
  for(i=0;i<5;i++){
  printf("introduce 5 valores para el segundo arreglo: \t");
  scanf("%f",&arreglo2[i]);
     }
      printf("Estas son las sumas de sus arreglos respectivamente: \n");
     for(i=0;i<5;i++){
      arreglo3[i]=arreglo1[i]+arreglo2[i];
      printf("-\n");
    printf(" En la posicion %d %f\n",i,arreglo3[i]);
    }
  return 0;
  }
