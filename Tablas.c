/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain1.c
 * Author: Saldaña Pacehco Brian Augusto
 *
 * Created on November 10, 2020, 6:12 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int x = 1;
    int y = 1;
    while (x<=10){
         printf ("Tabla del: %d\n",x);
    while(y<=10){
     printf ( " %d X %d = % d\n " , x, y, x * y);
        y = y + 1;
    }
    x++;
    y = 1;
    
}
  return (EXIT_SUCCESS);
}

