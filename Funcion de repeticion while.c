/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: augus
 *
 * Created on November 9, 2020, 1:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int x = 0;
    int y = 1;
    int z = 10;
    while(x <= z && y <=z){
        printf("%d\n",x);
        printf("%d\n",y);
        x = x+y;
        y= y+x;
    }
    
    return (EXIT_SUCCESS);
}

