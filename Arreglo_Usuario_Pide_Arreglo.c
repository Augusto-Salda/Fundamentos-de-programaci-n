/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
     int arreglo[x];
     int y;
     printf("Dame el número del arreglo: ");
     scanf("%d",&x);
     for(y=0;y<x;y++){
         printf ("Introduzca los números del arreglo: \n");
         scanf("%d",&arreglo[y]);
     }
     printf("\n");
     printf ("Los números que introduciste  son: \n");
  for(y=0;y<x;y++){
      printf("En la posición %d el valor que introduciste fue: %d\n",y,arreglo[y]);
  }
    return 0;
}
