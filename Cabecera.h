

/* 
 * File:   Cabecera.h
 * Author: Saldaña Pacheco Brian Augusto
 *
 * Created on January 14, 2021, 4:59 PM
 */

#ifndef CABECERA_H
#define CABECERA_H

#ifdef __cplusplus
extern "C" {
#endif


int suma();
int resta();
char primer_caracter();
double area_circulo();

 int suma(int a, int b){
        return a+b;
    }
    
    int resta(int a,int b){
        return a-b;
    }
   
    char primer_caracter(char* cadena){
        return cadena [0];
    }
    
    double area_circulo(int radio){
        float PI = 3.1416;
        return PI*radio*radio;
    }



#ifdef __cplusplus
}
#endif

#endif /* CABECERA_H */

