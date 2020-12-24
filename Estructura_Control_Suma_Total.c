
#include <stdio.h>
#include <stdlib.h>


int main() {
    int numero, suma;
    printf("Introduzca el total de un número a sumar: ");
    scanf("%d", &numero);
     int i = 1;
    while(i <= numero){
      suma = suma+i ;
      i++;
    }
    printf("La suma de sus números es : %d", suma);

    return 0;
}

