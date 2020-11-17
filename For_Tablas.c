/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: Saladaña Pacheco Brian Augusto
 *
 * Created on November 12, 2020, 4:18 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */


int main(int argc, const char * argv[])
{
    //CICLOS FOR EN C

 
    int c = 1;
    for(int x=1;x<=10;x++){
        printf("------------\n");
        printf("Tabla del %d\n",x);
        for(int c=1;c<=10;c++){
          printf("%d X %d = %d\n",x,c, x*c );  
        }  
    }

    return 0;

}



