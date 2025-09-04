# Ponteiros em C

##  O que são ponteiros em C?
Em **C**, um **ponteiro** é uma variável especial que armazena o **endereço de memória** de outra variável.  
Com eles, podemos acessar e manipular diretamente os valores armazenados na memória, tornando o código mais flexível e eficiente.

👉 Declaração de um ponteiro:
```c
int x = 10;
int *p = &x; // p armazena o endereço de x
```
---

##Por que usar ponteiros?

Eficiência → Evitam cópias desnecessárias de dados, pois trabalhamos diretamente com endereços.

Flexibilidade → Permitem manipular vetores, matrizes e strings de forma mais natural.

Passagem por referência → Funções podem alterar variáveis externas.

Estruturas dinâmicas → São indispensáveis para listas, pilhas, filas e árvores.

Acesso direto à memória → Facilitam cálculos e manipulação em baixo nível.

---

## Como os ponteiros foram utilizados na atividade?

Durante a atividade, os ponteiros foram usados como forma de acessar e manipular diretamente os dados armazenados na memória.  
Eles permitiram percorrer vetores e matrizes sem depender apenas de índices, facilitando cálculos como totais, médias e inversões de ordem.  
Além disso, possibilitaram imprimir tanto os valores quanto os endereços das variáveis, reforçando o entendimento de como a memória é organizada.  
