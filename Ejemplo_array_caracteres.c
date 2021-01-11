#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Ejemplo sencillo de uso de array de caracteres con la función "srtlen"

int main(){
    int i; //Declaramos nuestro contador 
char arreglo[15]; //Declaramos nuestra cadena de caracteres
printf("Escibe tu nombre: \n"); //Mensaje que te pedira tu nombre
gets(arreglo); //Función que se usara como un "scanf"
   for(i;i<strlen(arreglo);i++){  //ciclo que se encargara de mostrar las letras de tu nombre
        printf("La letra [%d] es: %c\n",i,arreglo[i]); // Mensaje que muestra tu nombre 
    }
return 0;
}