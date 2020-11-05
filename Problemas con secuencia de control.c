/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Saldaña Pacheco Brian Augusto
 *
 * Created on October 20, 2020, 7:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

     int  x = 1;
     int  y = 2;
     int  z = 3;
     if(x>y && x>z){
         printf ("El número mayor es : %d\n",x);
         
     }else{
         if(y>x && y>z){
            printf ("El número mayor es : %d\n",y);
         }else{
             printf ("El número mayor es : %d\n",z);
         }
         
     }
         

     
     
     
    return (EXIT_SUCCESS);
}

