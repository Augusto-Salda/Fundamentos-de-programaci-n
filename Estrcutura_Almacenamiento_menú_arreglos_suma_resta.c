
#include <stdio.h>
#include <stdlib.h>
int menu (void); 
void casos(int opcion);
void suma();
void resta();

int main() {
    
    int opcion;
     do{
         system("cls");
    opcion = menu();
    casos(opcion);
    system ("PAUSE");
     }while(opcion!=3);
    return(0);                                               
}                                                              

  int menu(void)
{
    int opcion;
    
    printf("Arreglos opciones \n");
    printf("(1) Sumar 2 arreglos de n dimensiones con n numeros \n");   
    printf("(2) Restar 2 arreglos de n dimensiones con n numeros\n");
    printf("(3) Salir\n");
    printf("Seleccione su opción deseada:");
    scanf("%d",& opcion);

    return opcion;
}
  
  void casos(int opcion){
    switch (opcion){
    case 1:
        system ("cls");
        suma();
    break;
    case 2:
        system ("cls");
        resta();
    break;
    case 3:
    break;
        default:
            printf("No se incerto ningun dato establecido");
            break;
    }
}

  void suma(void){
    int n,w,c;                                                                                                                                           
    int i = 0;               
    printf("Arreglo número 1\n");
    printf ("Dame el número de arreglo : \t ");      
    scanf("%d",&n);    
      float arreglo1[n];      
    for(i;i<n;i++){                                            
        printf("Ingrese los elementos del arreglo  [%d]\n",i+1);     
        scanf ("%f", &arreglo1[i]);                                                                                         
    }          
      printf("-------\n");
      printf("Arreglo número 2\n");
      printf ("Dame el número de arreglo : \t ");      
    scanf("%d",&w);    
      float arreglo2[w];
     int y=0;      
    for(y;y<w;y++){                                            
        printf("Ingrese los elementos del arreglo   [%d]\n",y+1);     
        scanf ("%f", &arreglo2[y]);                                                                                         
    }    
     printf("-------\n");
     printf("Arreglo número 3\n");
      printf ("Dame el número de arreglo : \t ");      
    scanf("%d",&c);    
      float arreglo3[c];
     int z = 0;      
    for(z;z<c;z++){                                            
        printf("Ingrese los elementos del arreglo   [%d]\n",z+1);     
        scanf ("%f", &arreglo3[z]); 
    }
     float arreglo4[i];
     i = 0;
      for(i;i<n;i++){
        arreglo4[i] = arreglo1[i]+arreglo2[i]+arreglo3[i];        
   printf ("Esta es la suma de los numeros de los 2 arreglos en posición %d y su valor es %f\n",i,arreglo4[i]);  
 }                                             
}
  
  void resta(void){
      int n,w,c;                                                                                                                                           
    int i = 0;               
    printf("Arreglo número 1\n");
    printf ("Dame el número de arreglo : \t ");      
    scanf("%d",&n);    
      float arreglo1[n];      
    for(i;i<n;i++){                                            
        printf("Ingrese los elementos del arreglo  [%d]\n",i+1);     
        scanf ("%f", &arreglo1[i]);                                                                                         
    }          
      printf("-------\n");
      printf("Arreglo número 2\n");
      printf ("Dame el número de arreglo : \t ");      
    scanf("%d",&w);    
      float arreglo2[w];
     int y=0;      
    for(y;y<w;y++){                                            
        printf("Ingrese los elementos del arreglo   [%d]\n",y+1);     
        scanf ("%f", &arreglo2[y]);                                                                                         
    }    
     printf("-------\n");
     printf("Arreglo número 3\n");
      printf ("Dame el número de arreglo : \t ");      
    scanf("%d",&c);    
      float arreglo3[c];
     int z = 0;      
    for(z;z<c;z++){                                            
        printf("Ingrese los elementos del arreglo   [%d]\n",z+1);     
        scanf ("%f", &arreglo3[z]); 
    }
     float arreglo4[i];
     i = 0;
      for(i;i<n;i++){
        arreglo4[i] = arreglo1[i]-arreglo2[i]-arreglo3[i];        
   printf ("Esta es la suma de los numeros de los 2 arreglos en posición %d y su valor es %f\n",i,arreglo4[i]);  
 }                                     
}
  