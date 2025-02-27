#include <stdio.h>
int main(){
    int torre, bispo = 1;

    printf("TORRE IRÁ ANDAR 5 CASAS PARA DIREITA.\n\n");

    while (torre <= 5)
    {
        printf("Direita\n");
        torre++;
    }
   
    printf("\nBISPO IRÁ ANDAR 5 CASAS NA DIAGONAL(PARA CIMA E PARA DIREITA).\n\n");

    do {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    } while (bispo <= 5);

    printf("\nRAINHA IRÁ ANDAR 8 CASAS PARA ESQUERDA.\n\n");

    for (int rainha = 1; rainha <= 8; rainha++) {
        printf("Esquerda\n");
    }

    printf("\nCAVALO IRÁ ANDAR 3 CASAS PARA BAIXO E 1 PARA ESQUERDA.\n\n"); // coloquei 3 casas pois para completar o L seria preciso 3 e nâo 2 casas.

    for (int cavalo = 1; cavalo <= 1; cavalo++){
        
        int cavalo1 = 1;
        while (cavalo1 <= 3)
        {
        printf("Baixo,");
        cavalo1++;
        }
        printf("Esquerda. ");
        
       
    }
    

   
    return 0;
    
}