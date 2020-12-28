#include <stdio.h>
#include <stdlib.h>

int suma(int x , int y);
int resta(int w, int z);
int producto(int u, int v);

int main(){
    int x,y,r;
    int w,z,r2;
    int u,v,r3;
    printf("Ingrese el primer valor a sumar: \t");
    scanf("%d",&x);
    printf("Ingrese el segundo valor a sumar: \t");
    scanf("%d",&y);
    r=suma(x,y);
    printf("El reultado de la suma es : \t %d", r);
    printf("\n-------------\n");
    printf("Ingrese el primer valor que se restara: \t");
    scanf("%d",&w);
    printf("Ingrese el segundo valor que resta : \t");
    scanf("%d",&z);
    r2=resta(w,z);
     printf("El reultado de la resta  es : \t %d", r2);
      printf("\n-------------\n");
       printf("Ingrese el primer valor que se multiplicara: \t");
    scanf("%d",&u);
    printf("Ingrese el segundo valor que multiplicara : \t");
    scanf("%d",&v);
    r3=producto(u,v);
    printf("El reultado del producto es : \t %d", r3);
    return 0;
}
int suma (int x , int y){
    
    return x+y;
}
int resta(int w, int z){
    
    return w-z;
}

int producto(int u, int v){
    
    return u*v;
}