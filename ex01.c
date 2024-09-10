#include<stdio.h>
#include<stdlib.h>

int maior (int n1, int n2)
{
    int resultado;
    if (n1 > n2)
    {
    printf("O maior numero digitado foi :%d\n",n1);
    }
    printf("O maior numero digitado foi :%d\n",n2);
    return(resultado);
}

int main(){

    int v1, v2, resultado;
    printf("Digite o valor 01 :\n");
    scanf("%d",&v1);
    printf("Digite o valor 02 :\n");
    scanf("%d",&v2);


    resultado = maior(v1,v2);   

    
    
    
    
    
    return 0;
    
}
            
