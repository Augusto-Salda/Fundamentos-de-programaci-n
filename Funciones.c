/*
 * File:   Funciones.c
 * Author: Saldaña Pacheco Brian Augusto
 *
 * Created on November 30, 2020, 10:42 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf ("Ejemplos de la función sqrt  con ejemplo (1) 900  y (2)9.0 (Raíz)\n");
    printf ("%.2f\n", sqrt(900));
    printf ("%.2f\n\n", sqrt(9.0));
    printf ("Ejemplos de la función exp con ejemplo (1) 1.0 y (2) 2.0 (Exponencial)\n");
    printf ("%.2f\n", exp(1.00));
    printf ("%.2f\n\n", exp(2.00));
   printf ("Ejemplos de la función log con ejemplo (1) 2.718282 y (2) 7.389056 (logaritmo natural)\n");
    printf ("%.2f\n",log(2.718282));
    printf ("%.2f\n\n",log(7.389056));
     printf ("Ejemplos de la función log10 con ejemplo (1) 10, (2)100 y (3) 1000  (Logaritmica con base 10)\n");
    printf ("%.2f\n",log10(1.0));
    printf ("%.2f\n",log10(10.0));
    printf ("%.2f\n\n",log10(100.0));
     printf ("Ejemplos de la función fabs con ejemplo (1) 10, (2) 0 y (3)-10  (Valor absoluto)\n");
    printf ("%.2f\n",fabs(10));
    printf ("%.2f\n",fabs(0));
    printf ("%.2f\n\n",fabs(-10));
     printf ("Ejemplos de la función ceil con ejemplo (1) 9.2 y (2) -9.8 (Redondear x al entero más pequeño que no sea menor a x)\n");
    printf ("%.2f\n",ceil(9.2));
    printf ("%.2f\n",ceil(-9.8));
     printf ("Ejemplos de la función floor con ejemplo (1) 9.2 y (2) -9.8  (Redondear x al entero más grande que no sea mayor a x)\n");
    printf ("%.2f\n",floor(9.2));
    printf ("%.2f\n\n",floor(-9.8));
     printf ("Ejemplos de la función pow con ejemplo (1) 2^7 y  (2) 9^0.5 (Eleva x a una potencia)\n");
    printf ("%.2f\n",pow(2,7));
    printf ("%.2f\n\n",pow(9,.5));
    printf ("Ejemplos de la función fmod con ejemplo de 13.657 de 2.333 (Residuo de x/y como número de punto flotante)\n");
    printf ("%.2f\n\n",fmod(13.657,2.333));
    printf ("Ejemplos de la función sin con ejemplo  de sen 0 (Seno trigonométrica de x en radianes)\n");
   printf ("%.2f\n\n",sin(0.0));
   printf ("Ejemplos de la función cos con ejemplo de cos 0 (Coseno trigonométrica de x en radianes )\n");
   printf ("%.2f\n\n",cos(0.0));
   printf ("Ejemplos de la función tan de tan de 0 (Tangente trigonométrica de x en radianes)\n");
   printf ("%.2f\n\n",tan(0.0));
    return 0;
}

