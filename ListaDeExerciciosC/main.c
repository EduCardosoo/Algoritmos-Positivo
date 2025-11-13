#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Exercicio 1
int main() {
    int vetor[8];
    int i;

    printf("--- Exercicio 1: Vetor Inverso ---\n");
    for (i = 0; i < 8; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos na ordem inversa:\n");
    for (i = 7; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
*/
/* Exercicio 2
int main() {
    float notas[5];
    int pesos[5] = {1, 2, 3, 4, 5};
    float soma_ponderada = 0, soma_pesos = 0;
    float media;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    for (i = 0; i < 5; i++) {
        soma_ponderada += notas[i] * pesos[i];
        soma_pesos += pesos[i];
    }
    media = soma_ponderada / soma_pesos;
    printf("\nA média ponderada final do aluno é: %.2f\n", media);

    return 0;
}
*/

/* Exercicio 3
int main() {
    int matriz[3][3];
    int i, j;

    printf("--- Exercicio 3: Diagonal Principal ---\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // diagonal principal (quando indice i = j)
    printf("\nElementos da Diagonal Principal:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
*/

/* Exercicio 4 
int main() {
    int matriz[4][5];
    int i, j;
    int soma = 0;

    printf("Preencha a matriz 4x5 com números inteiros:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (j = 0; j < 5; j++) {
        soma += matriz[2][j];
    }
    printf("\nA soma dos elementos da terceira linha (índice 2) é: %d\n", soma);

    return 0;
}
*/

/* Exercicio 5 
int main() {
    char frase[50];
    int i = 0;
    int contador_vogais = 0;

    printf("--- Exercicio 5: Contagem de Vogais ---\n");
    printf("Digite uma frase (maximo 49 caracteres): ");

    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        return 1;
    }

    while (frase[i] != '\0') {
        char c = frase[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador_vogais++;
        }
        i++;
    }

    printf("\nA frase digitada e: %s", frase);
    printf("O numero total de vogais na frase e: *%d*\n", contador_vogais);

    return 0;
}
*/

/* Exercicio 6
int main() {
    int matriz[5][5];
    int i, j;
    int contador = 0;

    printf("Preencha a matriz 5x5 com números inteiros:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("\nMatriz completa:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal de elementos estritamente maiores que 10: %d\n", contador);

    return 0;
}
*/

/* Exercicio 7
int main() {
    int vetorA[6];
    int vetorB[6];
    int vetorC[12];
    int i;
    int indiceC = 0;

    printf("--- Exercicio 7: Intercalacao de Vetores ---\n");

    printf("\nPreencha o VetorA: com numeros inteiros\n");
    for (i = 0; i < 6; i++) {
        printf("VetorA[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nPreencha o VetorB: com numeros inteiros\n");
    for (i = 0; i < 6; i++) {
        printf("VetorB[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < 6; i++) {
        // Coloca A[i]
        vetorC[indiceC] = vetorA[i];
        indiceC++;
        vetorC[indiceC] = vetorB[i];
        indiceC++;
    }

    printf("\nVetorC (Intercalacao de A e B):\n");
    for (i = 0; i < 12; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
*/

/* Exercicio 8
int main() {
    char nomes[5][20]; // Matriz 5x20 de caracteres
    int i;

    // Cadastro dos nomes
    printf("=== Cadastro de Usuarios ===\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do usuario %d: ", i + 1);
        scanf("%19s", nomes[i]); // lê até 19 caracteres (evita overflow)
    }

    // Exibição dos nomes cadastrados
    printf("\n=== Lista de Usuarios Cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, nomes[i]);
    }

    return 0;
}
*/

/* Exercicio 9
void dobrar_valores(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        vetor[i] = vetor[i] * 2; //pra dobrar o valor
    }
}

int main() {
    int vetor_original[5] = {1, 2, 3, 4, 5};
    int i;

    printf("--- Exercicio 9: Funcao Dobrar Valores ---\n");

    printf("Vetor original (ANTES de dobrar):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor_original[i]);
    }
    printf("\n");

    dobrar_valores(vetor_original, 5);

    printf("Vetor original (DEPOIS de dobrar):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor_original[i]);
    }
    printf("\n");

    return 0;
}
*/

/* Exercicio 10
#define N 5000 

int main() {
    static int matriz[N][N]; 
    long long soma;
    clock_t inicio, fim;
    double tempo_otimizado, tempo_nao_otimizado;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = (i + j) % 100;
        }
    }

    soma = 0;
    inicio = clock();
    for (int i = 0; i < N; i++) {       
        for (int j = 0; j < N; j++) {   
            soma += matriz[i][j];
        }
    }
    fim = clock();
    tempo_otimizado = (double)(fim - inicio) / CLOCKS_PER_SEC;
    soma = 0;
    inicio = clock();
    for (int j = 0; j < N; j++) {       
        for (int i = 0; i < N; i++) {   
            soma += matriz[i][j];
        }
    }
    fim = clock();
    tempo_nao_otimizado = (double)(fim - inicio) / CLOCKS_PER_SEC;


    printf("\nTempo com acesso OTIMIZADO (linha->coluna): %.3f segundos\n", tempo_otimizado);
    printf("Tempo com acesso NAO OTIMIZADO (coluna->linha): %.3f segundos\n", tempo_nao_otimizado);

    printf("\nDiferença: %.3f segundos (%.2fx mais lento)\n",
        tempo_nao_otimizado - tempo_otimizado,
        tempo_nao_otimizado / tempo_otimizado);

    return 0;
}
*/