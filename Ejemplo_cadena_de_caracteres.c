#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ejemplo sencillo de como se usaria una cadena de caracteres 


int main(){
       char nombre[15]; //Declaramos una cadena de caracteres
    printf("Dime tu primer nombre: \n\n"); // Imprimimos un mensaje para recopilar datos
    gets(nombre); //Función "gets" que se encarga de recopilar la iformación pero omitiendo los espacios
    printf("\n Tu nombre es: \n %s",nombre); //Mensaje que imprime tu nombre 
    return 0;
}

