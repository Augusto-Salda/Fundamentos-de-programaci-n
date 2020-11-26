/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arreglo_metodo_ordenamiento_burbuja_optimizado.c
 * Author: 
 *
 * Created on November 23, 2020, 11:18 AM
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int c;
    int o;
    int A;
    int cambio;
    int bandera = 1;
    printf("Tecle la cantidad de elementos del arreglo:  ");
    scanf("%d",&A);  
    int arreglo[A];
    int ciclos = 0;
    for(o=0;o<A;o++){
        printf("Tecle el valor para el arreglo [%d]: ",o);
        scanf("%i",&arreglo[o]);
    }
    for(c=0;c<A && bandera==1; c++){
        bandera = 0;
        for(o=0;o<A;o++){
        if (arreglo[o]>arreglo[o+1]){
            bandera = 1;
            cambio = arreglo[o+1];
            arreglo[o+1]= arreglo[o];
            arreglo[o]=cambio;   
        }
    }
       ciclos++;
}
    printf("Veces que reviso el programa el ciclo %d\n",ciclos);
    for(c=0;c<A;c++){
        printf("%d\t",arreglo[c]);
    }
    return 0;
}

