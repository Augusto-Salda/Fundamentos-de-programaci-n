
#include <stdio.h>
#include <stdlib.h>

int main(){
    int calif;
    printf ("¿Que calificación obtuvo del 1 al 10? \n");
    scanf("%d",&calif);
    int A = 10;
    int B = 9;
    int C = 8;
    int D = 7;
    int E = 6;
    int F = 6;
    if(calif>10){
        printf("No es posible sacar más de 10");
    }else{
        if(calif==A){
            printf("\n Sacaste una A");
        }else{
            if(calif==B){
                printf("\n Sacaste una B");
            }else{
                if(calif==C){
                    printf("\n Sacatse una C");
                }else{
                    if(calif==D){
                        printf("\n Sacaste una D");
                        
                    }else{
                        if(calif==E){
                            printf("\n Sacaste una E");
                            
                        }else{
                            if(calif<F){
                                printf("\n Sacaste una F");
                            }
                        }
                    }
                }
            }
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;         
}