#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    
    int novo_num = 0;
    int n = 5;
    int capacidade = 6;
    char continuar;

    srand(time(NULL));

    int *vetor = (int *) malloc(capacidade * sizeof(int));

    if (vetor == NULL) {
        printf("Falha ao alocar memoria.\n");
        return 1; 
    }

    // prencher automatico vetor e ordenar
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
        while(i > 0 && vetor[i] < vetor[i - 1]) {
            int temp = vetor[i];
            vetor[i] = vetor[i - 1];
            vetor[i - 1] = temp;
            i--;
        }

    }

    // Impressao do vetor original
    printf("--- Vetor Atual ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");


    do {
        // ETAPA 3: Inserir novo numero
        printf("\nDigite o numero que deseja inserir: ");
        while (scanf("%d", &novo_num) != 1) {
            printf("Entrada invalida. Digite um numero inteiro: ");
            while (getchar() != '\n'); // limpa buffer
        }

        // Aumenta capacidade do vetor, se necessario
        if (n >= capacidade) {
            capacidade *= 2;
            int *temp = realloc(vetor, capacidade * sizeof(int));
            if (temp == NULL) {
                printf("Erro ao realocar memoria.\n");
                free(vetor);
                return 1;
            }
            vetor = temp;
        }

        // Insere o novo numero
        int j;
        for (j = n - 1; j >= 0 && vetor[j] > novo_num; j--) {
            vetor[j + 1] = vetor[j];
        }
        vetor[j + 1] = novo_num;
        n++;


        // Mostra vetor final
        printf("\n--- Numero inserido na ordem ---\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");

        // Pergunta se o usuario quer continuar
        do {
            printf("\nDeseja inserir outro numero? (S/N): ");
            scanf(" %c", &continuar);
            continuar = toupper(continuar);

            if (continuar != 'S' && continuar != 'N') {
                printf("Invalido. Digite novamente S/N.\n");
            }

        } while (continuar != 'S' && continuar != 'N');

    } while (continuar == 'S');

    printf("\nPrograma encerrado.\n");
    free(vetor);

    return 0;
}