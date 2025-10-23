#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_VETOR 9
#define QUANTIDADE_LEITURA 8
// Exercicio 1
/*
int main() {
    int vetor[TAMANHO_VETOR];
    int i;
    printf("--- Leitura de %d valores ---\n", QUANTIDADE_LEITURA);
    for (i = 0; i < QUANTIDADE_LEITURA; i++) {
        printf("Digite o %dº valor (posicao %d): ", i + 1, i);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Erro na leitura. Finalizando o programa.\n");
        }
    }
    printf("\n--- Impressao dos valores na ordem inversa da leitura ---\n");
    for (i = QUANTIDADE_LEITURA - 1; i >= 0; i--) {
        printf("Posicao %d: %d\n", i, vetor[i]);
    }
    return 0;
}
*/
// Exercicio 2

int main()
{
    float notas[5];
    int pesos[5]={1,2,3,4,5};
    float soma_notas_ponderadas = 0.0;
    int soma_pesos = 0;
    float media_ponderada;
    printf(" Calculo de media ponderada\n");
    for (int i=0; i<5; i++){
        printf("Digite a nota da avaliação %f(peso%d):",i+1,pesos[i]);
        if(scanf("%f",&notas[i])!=1){
            printf("Erro na leitura da nota\n");
            return 1;
        }
    }
    for (int i=0; i<5;i++){soma_notas_ponderadas += notas[i]*pesos[i];
         soma_pesos += pesos[i];
}
if(soma_pesos>0){
    media_ponderada=soma_notas_ponderadas/soma_pesos;
    printf("\nSoma das notas poderadas: %2f\n", soma_notas_ponderadas);
    printf("Soma total dos pesos:%d\n", soma_pesos);
    printf("MEDIA PONDERADA FINAL:%2f\n", media_ponderada);
  } else {
      printf("\nErro:Soma de pesos indefinida.\n");
  }
  return 0;
}

