#include <stdio.h>
#include <stdlib.h>

float suma(float x , float y);
float resta(float w, float z);
float producto(float u, float v);

int main(){
    float x,y,r;
    float w,z,r2;
    float u,v,r3;
    printf("Ingrese el primer valor a sumar: \t");
    scanf("%f",&x);
    printf("Ingrese el segundo valor a sumar: \t");
    scanf("%f",&y);
    r=suma(x,y);
    printf("El reultado de la suma es : \t %f", r);
    printf("\n-------------\n");
    printf("Ingrese el primer valor que se restara: \t");
    scanf("%f",&w);
    printf("Ingrese el segundo valor que resta : \t");
    scanf("%f",&z);
    r2=resta(w,z);
     printf("El reultado de la resta  es : \t %f", r2);
      printf("\n-------------\n");
       printf("Ingrese el primer valor que se multiplicara: \t");
    scanf("%f",&u);
    printf("Ingrese el segundo valor que multiplicara : \t");
    scanf("%f",&v);
    r3=producto(u,v);
    printf("El reultado del producto es : \t %f", r3);
    return 0;
}
float suma (float x , float y){
    
    return x+y;
}
float resta(float w, float z){
    
    return w-z;
}

float producto(float u, float v){
    
    return u*v;
}