#include <stdio.h>
#include <stdlib.h>

int par_impar(void);


int main(){
    par_impar();
    return 0;
}

int par_impar(void){
    int x,*p;
    printf("Introduzca un número: \t");
    scanf("%d", &x);
    p = &x;
    if(*p%2 == 0){
        printf("El número ingresado %d es par \n",*p);
        printf("Su posición de memoria es: %p",p);
    }else{
 printf("El número ingresado %d es impar \n",*p);
        printf("Su posición de memoria es: %p",p);
    }
}

