#include <stdio.h>
#include <stdlib.h>

void cambio(float *p, float *x);
float mensaje1(void);

int main(){
    float mensaje,u,v;
    printf ("Programa que cambia sus valores y los suma\n");
    mensaje = mensaje1();
    printf("\n\n-------------------\n");
    cambio( &u , &v);
    printf("\n Estos son tus nuevos valores introducidos por la computadora: \n");
    printf("u ahora es: %f y v ahora es: %f \n",u,v);
    printf("Y su suma es: %f",u+v);
    return 0;
}

void cambio(float *p, float *x){
   *p = 10; 
   *x = 5;
}

float mensaje1(void){
    float u,v;
    printf("Ingrese un valor: \t");
    scanf("%f", &u);
    printf("Ingrese otro valor: \t");
    scanf("%f", &v);
    printf("\n Estos son tus valores ingresados: u es: %f y v es: %f ",u,v);
    printf("\n Y su suma es: %f",u+v);
}
