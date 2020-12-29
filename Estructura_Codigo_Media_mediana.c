#include <stdio.h>
#include <stdlib.h>

int media();



int main(){
    int x;
    printf ("Media y media de un arreglo de datos: \n");
    x = media();
    return 0;
}

int media(){
      int n;
    int i = 0;                                                   
    printf ("Dame el número de arreglo : \t ");      
    scanf("%d",&n);    
      float arreglo[n];      
    for(i;i<n;i++){                                            
        printf("Ingrese los elementos del arreglo a promediar [%d]\n",i+1);     
        scanf ("%f", &arreglo[i]);                                                                                         
    }          
      float r = 0;
      for(int i=0;i<n;i++){
           r = r+ arreglo[i];        
}
     printf ("Esta es la media de los números que tienes %f\n",r/n);
     int j;
     float c, mediana;
     for (j=0;j<n;j++){
         for (i=0;i<n;i++){
             if(arreglo[n]>arreglo[n+1]){
                 c=arreglo[n];
                 arreglo[n] = arreglo[n+1];
                 arreglo[n+1] = c;
             }
         }
     }
     if((n%2)==1){
         mediana=arreglo[n/2];
     }else{
         mediana = (arreglo[n/2]+arreglo[n/2-1])/2;
     }
     printf("La mediana es: %f\t",mediana);
}

