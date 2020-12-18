#include <stdio.h>
#include <stdlib.h>



int menu (void);
void casos(int opcion);
void circulo(void);
void rectangulo(void);
void triangulo(void);
void cuadrado(void);
void rombo(void);

int main(){
   int opcion;
     do{
         system("cmd/c cls");
    opcion = menu();
    casos(opcion);
    system ("cmd/c PAUSE");
     }while(opcion!=7);
    return(0);
}


int menu(void)
{
    int opcion;
    
    printf("Calculadora de áreas de diversas figuras: \n");
    printf("(1) Área del círculo\n");   
    printf("(2) Área del rectángulo\n");
    printf("(3) Área del triángulo \n");
    printf("(4) Área del cuadrado \n");
    printf("(5) Área del rombo \n");
    printf("(6) Salir\n");
    printf("Seleccione su opción deseada:");
    scanf("%d",& opcion);
    
    
    return opcion;
}





void casos(int opcion){
    switch (opcion){
    case 1:
        circulo();
    break;
    case 2:
        rectangulo();
    break;
    case 3:
        triangulo();
    break;
    case 4:
        cuadrado();
    break;
    case 5:
        rombo();
    break;
    case 6:       
    break;
      
        default:
            printf("No se incerto ningun dato establecido");
            break;
    }
}


void circulo(void){
    float radio, area;
    printf ("Introduzca el radio del círculo: \n");
    scanf ("%f", &radio);
    area = 3.1416*(radio*radio);
    printf ("El área del circulo es: \n %f", area);   
}

void rectangulo(void){
float base,altura,area;
printf( "Introduzca base: \n" );
   scanf( "%f", &base );
   printf( "Introduzca altura: \n" );
   scanf( "%f", &altura );
   area = base * altura;
   printf( "El área del rectangulo es:\n %f", area);
}

void triangulo(void){
    float altura, area, base;

   printf( "Introduzca base: \n" );
   scanf( "%f", &base );
   printf( "Introduzca altura: \n" );
   scanf( "%f", &altura );

   area = base * altura / 2;

   printf( "El área del triangulo es:\n %f", area );
}
    
void cuadrado(void){
    float lado,area;
    printf("Introduzca el valor del lado: \n");
    scanf ("%f", &lado);
    area = lado * lado;
    printf("El área del triangulo es: \n %f", area);
}

void rombo(void){
    float area, valor_diagonal_mayor, valor_diagonal_menor;
    printf ("Ingrese el valor de la diagonal mayor: \n");
    scanf ("%f", &valor_diagonal_mayor);
    printf ("Ingrese el valor de la diagonal menor: \n");
    scanf ("%f", &valor_diagonal_menor);
    area=(valor_diagonal_mayor*valor_diagonal_menor)/2;
    printf ("area rombo: %f\n", area);
}

