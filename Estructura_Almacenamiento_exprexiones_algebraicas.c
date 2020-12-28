
#include <stdio.h>
#include <stdlib.h>


int main() {
    float x,y,z,w,k;
    float *arreglo[5];
    arreglo[0] = &x;
    arreglo[1] = &y;
    arreglo[2] = &z;
    arreglo[3] = &w;
    arreglo[4] = &k;
    *arreglo[0] = 5;
    *arreglo[1] = 5;
    *arreglo[2] = 10;
    *arreglo[3] = 50;
    *arreglo[4] = 100;
    printf("Suma: \n");
    printf("x+y+z+w+k: %f\n",x+y+z+w+k);
    printf("Resta: \n");
    printf("y-x-w-k-z: %f\n",y-x-w-k-z);
    printf("Producto: \n");
    printf("w*k*y: %f\n",w*k*y);
    printf("División: \n");
    printf("w/z: %f\n", w/z);
    printf("Combinación: \n");
    printf("k+w+k-2/z*y: %f\n", k+w+k-2/z*y);
    return (0);                                                
}

