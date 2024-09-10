#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float distancia (float y1, float y2, float x1, float x2)
{
    float dist, deltas;
    deltas = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) ;
    dist = sqrt(deltas);

    return(dist);

}

int main(){

    float x1, x2, y1, y2, dist;

    printf("Vamos calcualar a distancia euclidiana entre dois pontos \n");
    printf("Digite o valor de X1:\n");
    scanf("%f", &x1);
    printf(" Agora X2 : \n");
    scanf("%f",&x2);
    printf("Digite o valor de Y1, :\n");
    scanf("%f", &y1);
    printf(" Agora Y2 : \n");
    scanf("%f", &y2);




    dist = distancia(y1, y2, x1, x2);   

    printf("A distancia euclidiana entre dois pontos eh :%f\n", dist);

    
    
    
    
    
    return 0;
    
}
            
