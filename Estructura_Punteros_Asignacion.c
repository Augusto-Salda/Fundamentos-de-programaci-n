
#include <stdio.h>
#include <stdlib.h>


int main(){
    int x,y;
    int *u;
    int *v;
    printf("Introduzca sus valor x: ");
    scanf("%d", &x);
    printf("Introduzca su valor y: ");
    scanf("%d", &y);
    
    printf("El valor x fue: %d\n",x);
    *u = x;
    printf("%p\n",&u);
    printf("\n--------\n");
    printf("El valor y fue: %d\n",y);
    *v = y;
    printf("%p\n",&v);
    
    
    
    return (0);
}
