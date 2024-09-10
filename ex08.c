#include<stdio.h>
#include<stdlib.h>

int positivo (int n1)
{
    int resultado;
    if (n1 > 0 && n1 !=0)
    {
        printf("1 \n");
    }else if (n1 == 0)
    {
        printf("0 \n");
    }else
    {
        printf("-1 \n");
    }
    
    return(resultado);
}

int main(){

    int v1, resultado;
    printf("Digite um valor :\n");
    scanf("%d",&v1);

    resultado = positivo(v1);   

    
    
    
    
    
    return 0;
    
}
            
