#include <stdio.h>
#include <stdlib.h>

long Factorial(long);

int main(){
    int numero,i;
    printf("Ingrese un número: \t");
    scanf("%i", &numero);
    printf("\n Factorial de %i\n",numero);
    for(i;i<=numero;i++){
        printf("%ld\n",Factorial(i));
    }
}

long Factorial(long numero){
    if(numero<=1){
        return 1;
    }else{
        return(numero * Factorial(numero-1));
    }
}