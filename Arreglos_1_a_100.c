
/* 
 * Author: Saladaña Pacheco Brian Augusto
 *
 * Created on November 19, 2020, 5:42 PM
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
     int z;
     long int arreglo [100];
     int y = 0;
     arreglo[0] = 2;
     arreglo[1] = 3;
     for(y=2;y<100;y++){
         arreglo[y]=arreglo[y-1]+arreglo[y-2];
         }
     for (y=0;y<100;y++){
         printf("[%d]"  "="  "%d\n",y ,arreglo[y]);
         
     }
    return 0;
}