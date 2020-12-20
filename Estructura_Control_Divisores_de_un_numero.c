#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,r,mcd;
    printf("Introduzca un número a sacar mcd: ");
    scanf("%d", &x);
    printf("Introduzca otro número a sacar mcd: ");
    scanf("%d", &y);
    do{
        r = x % y;
        if(r !=0){
            x = y;
            y = r;  
        }else{
            mcd = y;
        }   
    }while (r !=0);
    printf("El mcd es: %d", mcd);
    
    return 0;
}