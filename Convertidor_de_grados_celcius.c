

#include <stdio.h>
#include <stdlib.h>


int menu (void); 
void casos(int opcion);
void C_F(void);
void C_K(void);
void F_C(void);
void F_K(void);
void K_F(void);
void K_C(void);



int main() {
   
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
    
    printf("Transformafor de grados\n");
    printf("(1) Tranformar de grados Celsius a Farenheit\n");   
    printf("(2) Tranformar de grados Celsius a Kelvin\n");
    printf("(3) Tranformar de grados Farehneit a Celsius\n");
    printf("(4) Tranformar de grados Farenheit a Kelvin\n");
    printf("(5) Tranformar de grados Kelvin a Farenheit\n");
    printf("(6) Tranformar de grados Kelvin a Celcius\n");
    printf("(7) Salir\n");
    printf("Seleccione su opción deseada:");
    scanf("%d",& opcion);
    
    
    return opcion;
}

void casos(int opcion){
    switch (opcion){
    case 1:
        system ("cmd/c cls");
        C_F();
    break;
    case 2:
        system ("cmd/c cls");
        C_K();
    break;
    case 3:
        system ("cmd/c cls");
        F_C();
    break;
    case 4:
        system ("cmd/c cls");
        F_K();
    break;
    case 5:
        system ("cmd/c cls");
        K_F();
    break;
    case 6:
        system ("cmd/c cls");
        K_C();
    break;
    case 7:
    break;
        default:
            printf("No se incerto ningun dato establecido");
            break;
    }
}

void C_F(void){
    float celsius;
    float farenhait;
    printf("Dame los grados celcius a transformar en farenheit:\n");
    scanf("%f", & celsius);
    farenhait = (celsius*9/5)+32;
            printf("Esta es la conversión de celsius a farenheit: %f",farenhait);
}

void C_K(void){
     float celsius;
    float kelvin;
    printf("Dame los grados celcius a transformar en kelvin:\n");
    scanf("%f", & celsius);
    kelvin = celsius+273.15;
            printf("Esta es la conversión de celsius a kelvin: %f",kelvin);
}

void F_C(void){
     float celsius;
    float farenheit;
    printf("Dame los grados farenhait a tranformar en celsius:\n");
    scanf("%f", & farenheit);
    celsius = (farenheit-32)*5/9 ;
            printf("Esta es la conversión de farenheit a celsius: %f",celsius);
}

void F_K(void){
     float kelvin;
    float farenheit;
    printf("Dame los grados farenhait a tranformar en kelvin:\n");
    scanf("%f", & farenheit);
    kelvin = (farenheit-32)*5/9+273.15;
            printf("Esta es la conversión de farenheit a celsius: %f",kelvin);
}

void K_F(void){
    float kelvin;
    float farenheit;
    printf ("Dame los grados kelvin a transformar en farenheit:\n");
    scanf("%f",& kelvin);
    farenheit = (kelvin-273.15)*9/5+32;
    printf ("Esta es la conversión de kelvin a farenheit: %f",farenheit);
}

void K_C(void){
    float kelvin;
    float celsius;
    printf ("Dame los grados kelvin a transformar en celcius:\n");
    scanf("%f",& kelvin);
    celsius = kelvin-273.15;
    printf ("Esta es la conversión de kelvin a celsius: %f",celsius);
    
}