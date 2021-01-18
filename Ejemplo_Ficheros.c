
#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c,r;
    char mensaje1[] = "Valor 1:";
    char mensaje2[] = "Valor 2:";
    char mensaje3[] = "Valor 3:";
    char mensaje4[] = "Resultado";
    printf("Valor: \t");
    scanf("%d",&a);
    printf("Valor: \t");
    scanf("%d",&b);
    printf("Valor: \t");
    scanf("%d",&c);
    r = (a+b+c)/3;
    FILE* fichero;
    fichero = fopen("Ejercicio_Ficheros.txt", "wt");
    fprintf(fichero,"%s  %d\n",mensaje1,a);
    fprintf(fichero,"%s  %d\n",mensaje2,b);
    fprintf(fichero,"%s  %d\n",mensaje3,c);
    fprintf(fichero,"%s  %d\n",mensaje4,r);
    fclose(fichero);
    printf("Proceso completado");
    return 0;
}
