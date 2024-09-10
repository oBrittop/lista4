#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int positivo (int n1, int n2, int n3, int n4, int n5)
{
    if (n1 > 0 && n2 > 0 && n3 > 0 && n4 > 0 && n5 > 0)
    {
        printf("ok \n");
    }else
    {
        printf("Digite apenas nuemros postitivos");
    }
    
    

    return(positivo);


}




int soma1 (int n1){
    int resultado1 = 0, i;  

    
    for (i = 1; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
            resultado1 += i;  
        }
    }

    return resultado1;  
}


int soma2 (int n1){
    int resultado2 = 0, i;  

    
    for (i = 1; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
            resultado2 += i;  
        }
    }

    return resultado2;  
}



int soma3 (int n1){
    int resultado3 = 0, i;  

    for (i = 1; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
            resultado3 += i;  
        }
    }
    

    return resultado3;  
}




int soma4 (int n1){
    int resultado4 = 0, i; 

   
    for (i = 1; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
            resultado4 += i;  
        }
    }

    return resultado4; 
}




int soma5 (int n1){
    int resultado5 = 0, i; 

    
    for (i = 1; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
            resultado5 += i;  
        }
    }

    return resultado5;  
}



int main(){

    int n1, n2, n3, n4, n5, verificador, s1, s2, s3, s4, s5;

    printf("Vamos calcualar, para cada numero informado iremos escrever a soma de seus divisores \n");
    printf("Digite o 5 Numeros positivos :\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);




    verificador = positivo(n1, n2, n3, n4, n5);   

    s1 =  soma1(n1);
    s2 = soma2(n2);
    s3 = soma3(n3);
    s4 = soma4(n4);
    s5 = soma5(n5);

    printf("soma dos divisores do numero 1 eh :%d\n", s1);
    printf("soma dos divisores do numero 2 eh :%d\n", s1);
    printf("soma dos divisores do numero 3 eh :%d\n", s3);
    printf("soma dos divisores do numero 4 eh :%d\n", s4);
    printf("soma dos divisores do numero 5 eh :%d\n", s5);




    
    
    
    
/*Escreva um programa que leia 5 n´umeros inteiros positivos (utilize uma fun¸c˜ao que leia esse n´umero e verifique
se ele ´e positivo). Para cada n´umero informado escrever a soma de seus divisores (exceto ele mesmo). Utilize
a fun¸c˜ao SomaDivisores para obter a soma:
• Nome: SomaDivisores
• Descri¸c˜ao: Calcula a soma dos divisores do n´umero informado (exceto ele mesmo).
• Entrada: Um n´umero inteiro e positivo.
• Sa´ıda: A soma dos divisores.
• Exemplo: Para o valor 8: 1 + 2 + 4 = 7*/ 
    return 0;
    
}
            
