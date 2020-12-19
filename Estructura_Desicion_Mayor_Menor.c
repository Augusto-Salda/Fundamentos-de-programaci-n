#include <stdio.h>
#include <stdlib.h>




int main (){
    float x,y,z,w,n;
    printf("Dime un numero: \n");
    scanf("%f", &x);
    printf("Dime otro numero: \n");
    scanf("%f", &y);
    printf("Dime otro numero: \n");
    scanf("%f", &z);
    printf("Dime otro numero: \n");
    scanf("%f", &w);
    printf("Dime otro numero: \n");
    scanf("%f", &n);
    if (x>y && x>z && x>w && x>n){
        printf("Este es el mayor número: %f",x);
   }else{
         if(y>x && y>z && y>w && y>n){
            printf ("El número mayor es : %f",y);
         }else{
             if(z>x && z>y && z>w && z>n){
             printf ("El número mayor es : %f",z);
         }else{
                 if(w>x && w>y && w>z && w>n){
             printf ("El número mayor es : %f",w);
         }else{
             printf ("El número mayor es : %f",n);
           }
         }
   }
}
         if (x<y && x<z && x<w && x<n){
        printf("\n Este es el menor número:  %f",x);
   }else{
         if(y<x && y<z && y<w && y<n){
            printf ("\n El número menor es :  %f",y);
         }else{
             if(z<x && z<y && z<w && z<n){
             printf ("\n El número menor es :  %f",z);
         }else{
                 if(w<x && w<y && w<z && w<n){
             printf ("\n El número menor es :  %f",w);
         }else{
             printf ("\n El número menor es :  %f",n);
           }
         }
   }
}
             
       
        
    
    return 0;
}