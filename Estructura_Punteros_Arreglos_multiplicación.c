#include <stdio.h>
#include <stdlib.h>
int main(){
	 int x;
    int i;
    printf("Introduzca el tamaño del arreglo: \t");
    scanf("%d", &x);
   float arreglo[x];
   for(i = 0;i<x;i++){
    printf("Los valores del arreglo: [%d]\n", i+1);
    scanf("%f", &arreglo[i]); 
   } 
   float *s;
   for(i = 0;i<x;i++){
   	*s = arreglo[i]*x;
   	printf("Producto de x tamaño del arreglo por los elementos: %f\n",*s); 
   }
}