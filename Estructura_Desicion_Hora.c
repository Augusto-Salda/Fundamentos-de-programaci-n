/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int hora;
    char nombre [100];
    printf("¿Qué hora tienes? y ¿cuál es tu nombre?\n\n");
    scanf("%d\n", &hora);
    gets (nombre);
    if(hora>24){
        printf("No es numero valido, escribe un numero del 1 a 24\n");
    }else{
        if(hora<=12){
        printf("Buenos días %s \n",nombre);
    }else{
        if(hora>=13 && hora<=19){
            
            printf("Buenas tardes %s \n",nombre);
            
        }else{
            printf("Buenas noches %s \n", nombre);
        } 
      }
    }
    return 0;
}
