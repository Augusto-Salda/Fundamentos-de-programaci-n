
#include <stdio.h>
#include <stdlib.h>



float suma(float *t);
float resta(float *c);
float producto(float *r);
float cociente(float *w);



int main(){
    float x,y,z,q;
    printf("Ingrese x valor: \t");
    scanf("%f", &x);
     printf("\n Ingrese y valor: \t");
    scanf("%f", &y);
     printf("\n Ingrese z valor: \t");
    scanf("%f", &z);
      printf("\n Ingrese q valor: \t");
    scanf("%f", &q);
    suma(&x);
    resta(&y);
    producto(&z);
    cociente(&q);
    printf("\n El resultado de cada elemento ingresado más uno predeterminado es: \n x(suma):%f \n y(resta):%f \n z(producto):%f \n q(cociente):%f \n\n",x,y,z,q);    
    if(x>y && x>z && x>q){
        printf("El valor x es el mayor número \n");
          printf("Dirreción de memoria %p",x);
    }else{
        if(y>x && y>z  && y>q){
           printf("El valor y es el mayor número \n");
           printf("Dirreción de memoria %p",y);
        }else{
            if(z>x && z>y && z>q){
               printf("El valor z es el mayor número \n");
                 printf("Dirreción de memoria %p",z);
            }else{
                printf("El valor q es el mayor número \n");
                  printf("Dirreción de memoria %p",q);
            }
        }
    }
    return 0;
}

float suma(float *t){
    *t = *t+20;
  
}
float resta(float *c){
     *c = *c-5;
}

float producto(float *r){
     *r = *r*7;     
}

float cociente(float *w){
    *w = *w/2;
}

