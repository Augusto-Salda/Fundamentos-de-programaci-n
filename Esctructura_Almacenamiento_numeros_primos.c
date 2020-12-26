
#include <stdio.h>
#include <stdlib.h>

int main(){
 int x,c,z,i,tabla[100]; 
 i=0;
 for (x=1;x<=100;x++){
 c=0;
 for (z=1;z<=x;z++){
 if (x%z==0){
 c++;
    }
  }      
   if (c==2 || z==1 || z==0) {
  tabla[i]=x;
  i++;
      }  
    }
 printf("Estos son los números primos del 1 al 100: \n"); 
 x=0;
 for (x;x<i;x++){
 printf("Posición %d y su numero primo %d\n",x,tabla[x]);
  }     
    return 0;
}