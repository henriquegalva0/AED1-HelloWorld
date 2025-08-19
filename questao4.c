// 4. Leia três números inteiros e imprima a soma e a média aritmética deles

#include <stdio.h> // importar biblioteca necessária para execução do programa em C

int main() { // abrir função de execução principal do projeto
    int numeroA, numeroB, numeroC; // declarar variáveis dos numeros do enunciado

    printf("Insira 3 números inteiros para a análise:\n"); // pedir ao usuário colocar 3 inteiros
    scanf("%d %d %d", &numeroA,&numeroB,&numeroC); // salvar números inteiros "&d" em um armazenamento específico "&" nas varíaveis declaradas previamente

    int soma = numeroA + numeroB + numeroC; // calcular soma dos números inteiros

    float media = (float)soma/3; // calcular média aritmética dos números reaproveitando a soma e definindo ela como float

    printf("O valor da soma dos números %d,%d e %d é %d. E a média deles é %.2f", numeroA, numeroB, numeroC, soma, media); // retorno com valores referenciados como inteiros e depois float

    return 0; // verificar status de término do programa
}