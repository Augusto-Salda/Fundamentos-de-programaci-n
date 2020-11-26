/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arreglo_max_y_min.c
 * Author: Saldaña Pacheco Brian Augusto
 *Condiciones 
 * 1.Pedir n al usuario
 * 2.El usuario ingresa los valores y almacena en "A"
 * Created on November 23, 2020, 11:16 AM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  float mayor = 0;
  float menor = 0;
  int n;
  int i = 0;
  printf("Intoduzca el número de arreglo \t");
  scanf("%d",&n);
    float arreglo[n];
  for(i;i<n;i++){
  printf("Introduzca los números que quiera en el arreglo: [%d] \t",i+1);
  scanf("%f",&arreglo[i]);
  }
    i = 0;
  mayor=arreglo[0];
  menor=arreglo[0];
  for( i;i<n;i++){
    if(arreglo[i] > mayor){
      mayor = arreglo[i];
    }
     if (arreglo[i] < menor){
    menor = arreglo[i];
       }
    }
  printf("El número mayor de la serie es: %f",mayor);
  printf("\n");
  printf("El número menor de la serie es: %f",menor);
  return 0;
}
