#include <stdio.h>
#include <stdlib.h>

int menu (void);
void casos(int opcion);
void velocidad(void);
void aceleracion(void);
void rapidez(void);


int main(){
     int opcion;
     do{
         system("cls");
    opcion = menu();
    casos(opcion);
    system ("PAUSE");
     }while(opcion!=4);
    return(0);        
}

int menu(void)
{
    int opcion;
    
    printf("Elija la opción deseada: \n");
    printf("(1) Calcular la velocidad de un objeto\n");   
    printf("(2) Calcular la aceleración de un objeto\n");
    printf("(3) Calcular la rapidez de un objeto\n");
    printf("(4) Salir\n");
    printf("Seleccione su opción deseada:");
    scanf("%d",& opcion);
    
    
    return opcion;
}

void casos(int opcion){
    switch (opcion){
    case 1:
        system("cls");
        velocidad();
    break;
    case 2:
        system("cls");
        aceleracion();
    break;
    case 3:
        system("cls");
        rapidez();
    break;
    case 4:       
    break;
      
        default:
            printf("No se inserto ningun dato establecido");
            break;
    }
}

void velocidad(void){
  float v,d,t;
    int i;
    printf("Los valores que intoduzca se obtaran por tenerlos como metros y segundos \n\n");
    printf("¿Qué es lo que quiere calcular?\n");
    printf("1 Velocidad\n 2 Distancia\n 3 Tiempo\n\n");
    scanf("%d",&i);
    system("cls");
    if (i == 1){
    printf("Introduzca la distancia de recorrido de un objeto: \t");
    scanf("%f",&d);
    printf("Introduzca el tiempo de recorrido del objeto: \t");
    scanf("%f",&t);
    v = d/t;
    printf ("La velocidad del objeto es de %f m/s",v);
    }else{
        system("cls");
        if(i == 2){
             printf("Introduzca la velocidad del  objeto: \t");
    scanf("%f",&v);
    printf("Introduzca el tiempo de recorrido del objeto: \t");
    scanf("%f",&t);
    d = v*t;
    printf ("La distancia del objeto es de %f m",d);
        }else{
            system("cls");
            if(i == 3){
                 printf("Introduzca la distancia de recorrido del objeto: \t");
    scanf("%f",&d);
    printf("Introduzca la velocidad de recorrido del objeto: \t");
    scanf("%f",&v);
    t = d/v;
    printf ("El tiempo del objeto es de %f s",t);
            }else{
                if (i>3 || i<0){
                    printf("No se reconocio ningun valor establecido");
                }
            }
        }
    }
}

void aceleracion(void){
     float vi,vf,a,t;
    int i;
    printf("Los valores que intoduzca se obtaran por tenerlos como metros y segundos \n\n");
    printf("¿Qué es lo que quiere calcular?\n");
     printf("1 Aceleracion\n 2 Velocidad inicial\n 3 Velocidad final\n 4 Tiempo \n\n");
     scanf("%d", &i);
     system("cls");
     if(i == 1 ){
         printf ("Introduzca la velocidad inicial del objeto: \t");
         scanf("%f", &vi);
         printf ("Introduzca la velocidad final del objeto: \t");
         scanf("%f", &vf);
         printf ("Introduzca el tiempo de recorrido del objeto: \t");
         scanf("%f", &t);
         a = (vf-vi)/t ;
         printf ("La aceleración del objeto es de: %f m/s ", a);     
     }else{
         system("cls");
         if(i == 2){
               printf ("Introduzca la aceleración  del objeto: \t");
         scanf("%f", &a);
         printf ("Introduzca la velocidad final del objeto: \t");
         scanf("%f", &vf);
         printf ("Introduzca el tiempo de recorrido del objeto: \t");
         scanf("%f", &t);
         vi = vf-(a*t);
         printf ("La velocidad inicial del objeto es de: %f m/s ", vi);       
         }else{
             system("cls");
             if(i == 3){  
         printf ("Introduzca la velocidad inicial del objeto: \t");
         scanf("%f", &vi);
         printf ("Introduzca la aceleración del objeto: \t");
         scanf("%f", &a);
         printf ("Introduzca el tiempo de recorrido del objeto: \t");
         scanf("%f", &t);
         vf = vi+(a*t);
         printf ("La velocidad final del objeto es de: %f m/s ", vf);     
             }else{
                 system("cls");
                 if(i == 4){
       printf ("Introduzca la velocidad inicial del objeto: \t");
         scanf("%f", &vi);
         printf ("Introduzca la velocidad final del objeto: \t");
         scanf("%f", &vf);
         printf ("Introduzca la aceleración del objeto: \t");
         scanf("%f", &a);
         t = (vf-vi)/a;
         printf ("El tiempo del objeto es de: %f s ", t);     
                     
                 }else{
                     if(i>4 || i<0 ){
                       printf("No se reconocio ningun valor establecido");
                     }
                 }
             }
         }
     }
}

void rapidez(){
    
     float r,d,t;
    int i;
    printf("Los valores que intoduzca se obtaran por tenerlos como metros y segundos \n\n");
    printf("¿Qué es lo que quiere calcular?\n");
    printf("1 Rapidez\n 2 Distancia\n 3 Tiempo\n\n");
    scanf("%d",&i);
    system("cls");
    if (i == 1){
    printf("Introduzca la distancia de recorrido de un objeto: \t");
    scanf("%f",&d);
    printf("Introduzca el tiempo de recorrido del objeto: \t");
    scanf("%f",&t);
    r = d/t;
    printf ("La rapidez del objeto es de %f m/s",r);
    }else{
        system("cls");
        if(i == 2){
             printf("Introduzca la velocidad del  objeto: \t");
    scanf("%f",&r);
    printf("Introduzca el tiempo de recorrido del objeto: \t");
    scanf("%f",&t);
    d = r*t;
    printf ("La distancia del objeto es de %f m",d);
        }else{
            system("cls");
            if(i == 3){
                 printf("Introduzca la distancia de recorrido del objeto: \t");
    scanf("%f",&d);
    printf("Introduzca la velocidad de recorrido del objeto: \t");
    scanf("%f",&r);
    t = d/r;
    printf ("El tiempo del objeto es de %f s",t);
            }else{
                if (i>3 || i<0){
                    printf("No se reconocio ningun valor establecido");
                }
            }
        }
    }
}
