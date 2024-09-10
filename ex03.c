#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int potencia (int n1, int n2)
{
    int pot;
    pot = pow(n1,n2);
    
    return(pot);
}

int main(){

    int v1, v2, pot;

    printf("----------------------- \n");
    printf("Vamos calcular potencia \n");
    printf("Digite apenas nuemro inteiro e >0 \n");
    printf("Digite a base :\n");
    scanf("%d",&v1);
    printf("Digite o expoente :\n");
    scanf("%d",&v2); 


    pot = potencia(v1,v2);   
    printf("A potencia eh :%d\n",pot);
    printf("-----------------------");

    
    
    
    
    
    return 0;
    
}
            
