

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

     int  x = 2;
     int  y = 6;
     int  z = 5;
     int  w = 4;
     if(x>y && x>z && x>w){
         printf ("El número mayor es : %d",x);
         
     }else{
         if(y>x && y>z && y>w){
            printf ("El número mayor es : %d",y);
         }else{
             if(z>x && z>y && z>w){
             printf ("El número mayor es : %d",z);
         }else{
             printf ("El número mayor es : %d",w);
          }
         }
     }
         

     
     
     
    return (EXIT_SUCCESS);
}

