#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &n);

    int *horas = malloc(n * sizeof(int));
    int total = 0;

    for (int i = 0; i < n; i++) {
        printf("Digite as horas do funcionario %d: ", i + 1);
        scanf("%d", (horas + i));
        total += *(horas + i);
    }

    printf("\nTotal de horas trabalhadas: %d\n", total);

    free(horas);
    return 0;
}
