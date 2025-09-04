#include <stdio.h>

int main() {
    float preco[5];
    float *ptr = preco;

    for (int i = 0; i < 5; i++) {
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &preco[i]);
    }

    printf("\nPrecos e descontos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Produto %d: R$ %.2f | com desconto: R$ %.2f\n",
               i + 1, *(ptr + i), *(ptr + i) * 0.9);
    }

    return 0;
}
