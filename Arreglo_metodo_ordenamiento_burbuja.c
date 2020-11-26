

/* 
 * File:   Arreglo_método_ordenamiento_burbuja.c
 * Author: Saldaña Pacheco Brian Augusto
 * * Condiciones 
 * 1.Pedir n al usuario
 * 2.El usuario ingresa los valores y almacena en "A"
 * Created on November 23, 2020, 11:17 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 * Condiciones 
 * 1.Pedir n al usuario
 * 2.El usuario ingresa los valores y almacena en "A"
 */
int main() {
    int c;
    int o;
    int A;
    int cambio;
    printf("Ingrese la cantidad de elementos del arreglo:  ");
    scanf("%d",&A);
    int arreglo[A];
    for(o=0;o<A;o++){
        printf("Ingrese el valor para el arreglo [%d]: ",o);
        scanf("%d",&arreglo[o]);
    }
    for(c=0;c<A; c++){
        for(o=0;o<A;o++){
        if (arreglo[o]>arreglo[o+1]){
            cambio = arreglo[o+1];
            arreglo[o+1]= arreglo[o];
            arreglo[o]=cambio;
        }
    }
}
    printf ("Este es el acomodo de sus elementos: ");
    printf ("\n");
    for(c=0;c<A;c++){
        printf("%d\t",arreglo[c]);
    }
    return 0;
}

