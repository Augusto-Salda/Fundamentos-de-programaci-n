#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nombres[15];
    char apellidos[20];
    printf("Dame tu nombre: \n");
    gets (nombres);
    printf("Dame tus apellidos \n");
    gets(apellidos);
    strcat(nombres,apellidos);
    printf("Su nombre completo es: %s \t",nombres);
    strcpy(nombres,apellidos);
    printf("\n");
    printf("Su remplazado del nombre con el apellido es: %s \n",nombres);
    return 0;
}
