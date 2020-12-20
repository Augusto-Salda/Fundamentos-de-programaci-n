#include <stdio.h>
#include <stdlib.h>

int suma_N(void);

int main(){
    int S;
    S = suma_N();
    return 0;
}

int suma_N(void){
    float suma,numero;
    suma = 0;
    printf ("Sume los números que quiera, termine su suma ingresando un 0 \n");
    printf("Introduzca un número a sumar: \t");
    scanf("%f", &numero);
    while(numero>=1){
        suma = suma+numero;
           printf("Introduzca un número a sumar : \t");
           scanf("%f", &numero);
    }
    printf("La suma de sus números es : %f", suma);
}