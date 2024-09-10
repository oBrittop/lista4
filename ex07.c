#include<stdio.h>
#include<stdlib.h>

int par (int n1)
{
    int resultado;
    if (n1 % 2 ==  0 )
    {printf("1\n");}
    else
    printf("0\n");
    return(resultado);
}

int main(){

    int v1, resultado;
    printf("Digite um valor  :\n");
    scanf("%d",&v1);

    resultado = par(v1);   

    
    
    
    
    
    return 0;
    
}
            
