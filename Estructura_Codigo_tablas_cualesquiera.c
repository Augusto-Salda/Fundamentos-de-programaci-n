#include <stdio.h>
#include <stdlib.h>

int tabla(void);



int main(){
    int numero;
    printf("Tablas de multiplicar cuales quiera:\n");
    numero = tabla();
    return 0;
}


int tabla(void){
int x;
int y = 1;
int n;
printf ("Hasta que tabla quiere saber :");
scanf("%d",&n);
printf ("Tabla de multiplicar que usted quiera saber :");
scanf("%d",&x);
while (y<=n){
printf("%d X %d = %d\n",x,y,x*y);
y = y+1;
  }
}

