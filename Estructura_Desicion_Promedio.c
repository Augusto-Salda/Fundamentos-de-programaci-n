/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float c1,c2,c3,c4,promedio;
    printf("Dame tu calificacion número 1 a promediar: \n");
    scanf ("%f", &c1);
    printf("Dame tu calificacion número 2 a promediar: \n");
    scanf ("%f", &c2);
    printf("Dame tu calificacion número 3 a promediar: \n");
    scanf ("%f", &c3);
    printf("Dame tu calificacion número 4 a promediar: \n");
    scanf ("%f", &c4);
    if(c1<=10 && c2<=10 && c3<=10 && c4<=10){
        promedio = (c1+c2+c3+c4)/4;
        printf("Este es tu promedio: \n %f",promedio);
    }else{
        printf("No existe una calificación por semestre mayor a 10\n");
    }
   return 0; 
}
   