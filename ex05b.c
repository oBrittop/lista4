#include<stdio.h>
#include<stdlib.h>

int positivo(int n) {
    return n > 0; // Retorna 1 se o número for positivo, 0 caso contrário
}

int SomaDivisores(int n) {
    int resultado = 0, i;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            resultado += i;  
        }
    }
    return resultado;
}

int main() {
    int n1, n2, n3, n4, n5, s1, s2, s3, s4, s5;

    printf("Vamos calcular, para cada numero informado a soma de seus divisores (exceto ele mesmo) \n");
    printf("Digite 5 numeros positivos:\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    // Verifica se os números são positivos
    if (positivo(n1) && positivo(n2) && positivo(n3) && positivo(n4) && positivo(n5)) {
        // Calcula as somas dos divisores
        s1 = SomaDivisores(n1);
        s2 = SomaDivisores(n2);
        s3 = SomaDivisores(n3);
        s4 = SomaDivisores(n4);
        s5 = SomaDivisores(n5);

        // Imprime os resultados
        printf("Soma dos divisores do numero 1 (%d) eh: %d\n", n1, s1);
        printf("Soma dos divisores do numero 2 (%d) eh: %d\n", n2, s2);
        printf("Soma dos divisores do numero 3 (%d) eh: %d\n", n3, s3);
        printf("Soma dos divisores do numero 4 (%d) eh: %d\n", n4, s4);
        printf("Soma dos divisores do numero 5 (%d) eh: %d\n", n5, s5);
    } else {
        printf("Digite apenas numeros positivos.\n");
    }

    return 0;
}
