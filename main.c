#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    
    int novo_num = 0;
    int n = 5;
    int capacidade = 6;

    srand(time(NULL));

    int *vetor = (int *) malloc(capacidade * sizeof(int));

    if (vetor == NULL) {
        printf("Falha ao alocar memoria.\n");
        return 1; 
    }
    // ETAPA 1: Preencher o vetor com números aleatórios
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
    }

    // Impressão do vetor original
    printf("--- Vetor Atual ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // ETAPA 2: Reorganizar
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = vetor[i];
        for (j = i - 1; j >= 0 && vetor[j] > key; j--) {
            vetor[j + 1] = vetor[j];
        }
        vetor[j + 1] = key;
    }

    printf("\n--- Vetor Ordenado ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

// ETAPA 3: Inserir novo número
    printf("\nDigite o numero que deseja inserir: ");
    scanf("%d", &novo_num);

    for (j = n - 1; j >= 0 && vetor[j] > novo_num; j--) {
        vetor[j + 1] = vetor[j];
    }
    vetor[j + 1] = novo_num;
    n++;

    printf("\n--- Vetor Final ---\n");
    for (int i = 0; i < n; i++) { // n = 6
        printf("%d ", vetor[i]);
    }

    printf("\n");

    free(vetor);

    return 0;
}