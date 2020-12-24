
#include <stdio.h>
#include <stdlib.h>

int main(){
    int nc,aux,rest;
    int i=0;
    printf("Ingrese el número: \t");
    scanf("%d", &nc);
    aux=nc;
    while(aux > 0){
        rest = aux % 10;
        aux = aux/10;
        i = i*10+rest;  
    } 
    if(i == nc ){
        printf("El número ingresado es capicuo");
    }else{
        printf("El número ingresado no es capicuo");
    }
    return 0;
}