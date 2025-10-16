#include <stdio.h>
#include <stddef.h>
#define NUM_ALUNOS 6
/*
int main()
{
    char vetor[]={'p', 'e', 'i', 'x', 'e'};
    printf("%c %c %c %c %c", vetor[0],vetor[1],vetor[2],vetor[3],vetor[4]);
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%c posicao = %d\n", vetor[i], i);
    }

    return 0;
}
*/
/*
int main()
{
    char nome [15]="Algoritmos C";
    int i;
    printf("Nome como String: %s\n", nome);
    printf("Nome Caractere por Caractere:\n");

    for(i=0; nome[i] !='\0'; i++){
        printf("Char na pos.[%d]: %c\n",i,nome[i]);
    }

    return 0;
}
*/

int main()
{
    float notas[NUM_ALUNOS];
    float soma = 0.0;
    float media = 0.0;

    printf("---Entrada das notas---:\n");
    for (int i=0; i<NUM_ALUNOS;i++){
        printf("Digite a nota do aluno %d:",i+1);
        scanf("%f", &notas[i]);
    }
    for(int i=0; i<NUM_ALUNOS;i++){
        soma=soma+notas[i];
    }
    media=soma/NUM_ALUNOS;
    printf("\n---Resultados---\n");
    printf("Soma total das notas:%2f\n", soma);
    printf("Numero de alunos: %d\n", NUM_ALUNOS);
    printf("Media da turma: %2f\n", media);

    return 0;
}
