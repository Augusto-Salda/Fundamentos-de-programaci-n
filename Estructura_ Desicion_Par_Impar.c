/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numero,condicion;
    printf("Dime el número que quieras saber si es par o impar\n");
    scanf("%d",&numero);
    condicion = numero%2;
    if(numero==0){
        printf("El número ingresado es 0");
    }else{
        if(condicion==0){
            printf("El número es par");
        }else{
            printf("El número es impar");
          }

        }
    return 0;
}