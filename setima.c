#include <stdio.h>

int main() {
    // Matriz já preenchida com os pontos
    int pontos[4][4] = {
        {5, 7, 8, 6},  // Jogador 1
        {4, 6, 5, 7},  // Jogador 2
        {3, 9, 6, 8},  // Jogador 3
        {2, 4, 7, 5}   // Jogador 4
    };

    int *ptr = &pontos[0][0];
    int totalJogador[4] = {0};
    int totalSet[4] = {0};
    int pares = 0, impares = 0;

    // Mostrar matriz e calcular totais
    printf("📊 Pontos dos jogadores em cada set:\n");
    for (int i = 0; i < 4; i++) {
        printf("Jogador %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            int valor = *(ptr + i * 4 + j);
            printf("%3d ", valor);

            totalJogador[i] += valor;
            totalSet[j] += valor;

            if (valor % 2 == 0) pares++;
            else impares++;
        }
        printf("\n");
    }

    // Contagem pares/ímpares
    printf("\nQuantidade de pontos pares: %d\n", pares);
    printf("Quantidade de pontos ímpares: %d\n", impares);

    // Jogador com maior pontuação
    int maiorJogador = 0;
    for (int i = 1; i < 4; i++) {
        if (totalJogador[i] > totalJogador[maiorJogador]) {
            maiorJogador = i;
        }
    }

    printf("\nTotal de pontos por jogador:\n");
    for (int i = 0; i < 4; i++) {
        printf("Jogador %d: %d\n", i + 1, totalJogador[i]);
    }
    printf(" Jogador com maior pontuacao: Jogador %d\n", maiorJogador + 1);

    // Set mais disputado
    int maiorSet = 0;
    for (int j = 1; j < 4; j++) {
        if (totalSet[j] > totalSet[maiorSet]) {
            maiorSet = j;
        }
    }

    printf("\nTotal de pontos por set:\n");
    for (int j = 0; j < 4; j++) {
        printf("Set %d: %d\n", j + 1, totalSet[j]);
    }
    printf(" Set mais disputado: Set %d\n", maiorSet + 1);

    // Média de pontos por jogador
    printf("\nMédia de pontos por jogador:\n");
    for (int i = 0; i < 4; i++) {
        printf("Jogador %d: %.2f\n", i + 1, totalJogador[i] / 4.0);
    }

    // Jogador mais regular
    int maisRegular = 0;
    int menorDiferenca = 9999;
    for (int i = 0; i < 4; i++) {
        int maior = pontos[i][0];
        int menor = pontos[i][0];
        for (int j = 1; j < 4; j++) {
            if (pontos[i][j] > maior) maior = pontos[i][j];
            if (pontos[i][j] < menor) menor = pontos[i][j];
        }
        int diferenca = maior - menor;
        if (diferenca < menorDiferenca) {
            menorDiferenca = diferenca;
            maisRegular = i;
        }
    }
    printf("\n Jogador mais regular: Jogador %d (diferença de %d pontos entre maior e menor set)\n",
           maisRegular + 1, menorDiferenca);

    return 0;
}
