#include<stdio.h>
#include<stdlib.h>

void medias (char tipo, float n1, float n2, float n3)
{
    if (tipo == 'A')
    {
        printf("Sua media aritimetica eh :%.2f\n", (n1 + n2 + n3) / 3) ;
    }
    else if (tipo == 'P')
    {
        printf("Sua media pondera eh :%.2f\n", (5 * n1 + 3 * n2 + 2 * n3) / 10);
    }
    else if (tipo == 'H')
    {
        printf("Sua media harmonica eh :%.2f\n",3 / ((1 / n1) + (1 / n2) + (1 / n3)));

    }   
    else printf("Tipo Invalido");

}

int main(){

    float n1, n2, n3;
    char tipo;
    printf("Digite a primeira nota :\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota :\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota :\n");
    scanf("%f",&n3);
    printf("Digite A para media aritmetica, P para media ponderada e H para media harmonica (tem que ser em maiusculo) :\n");
    scanf(" %c", &tipo);

    medias(tipo, n1, n2, n3);   

    
    
    
    
    
    return 0;
    
}
//. Escreva uma fun¸c˜ao que receba 3 notas de um aluno e uma letra. Se a letra for A a fun¸c˜ao retorna a m´edia
//aritm´etica das notas do aluno, se for P, a sua m´edia ponderada (pesos: 5, 3 e 2) e se for H, a sua m´edia
//harmˆonica.
            
