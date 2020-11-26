

/* 
 * File:   Arreglo_Promedio.c
 * Author: Saldaña Pacheco Brian Augusto
 * Created on November 23, 2020, 11:16 AM
 * 
 * Condiciones 
 * 1.Pedir n al usuario
 * 2.El usuario ingresa los valores y almacena en "A"
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int n;                                                                                                                                           
    int i = 0;                                                   
    printf ("Dame el número de arreglo : \t ");      
    scanf("%d",&n);    
      float arreglo[n];      
    for(i;i<n;i++){                                            
        printf("Ingrese los elementos del arrgelo a promediar [%d]\n",i+1);     
        scanf ("%f", &arreglo[i]);                                                                                         
    }          
      float r = 0;
      for(int i=0;i<n;i++){
           r = r+ arreglo[i];        
}
     printf ("Esta es la suma de números que tienes %f\n",r/n);  
    return (0);                                                
}                                                              

