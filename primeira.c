#include <stdio.h>

int main() {
    int cofrinho = 400;
    int *ptr = &cofrinho;

    printf("Valor no cofrinho: %d\n", *ptr);
    printf("Endereco de memoria: %p\n", (void*)ptr);

    return 0;
}
