#include <stdio.h>

int main() {
    int matriz[3][3];
    int *ptr = &matriz[0][0];
    int somaDiagonal = 0;

    // Leitura
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite a nota do aluno %d prova %d: ", i + 1, j + 1);
            scanf("%d", (ptr + i * 3 + j));
        }
    }

    // Impressão e soma da diagonal
    printf("\nNotas registradas:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int valor = *(ptr + i * 3 + j);
            printf("%3d ", valor);
            if (i == j) somaDiagonal += valor;
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", somaDiagonal);

    return 0;
}
