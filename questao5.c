// 5. Faça um programa que converta uma temperatura de Celsius para Fahrenheit

#include <stdio.h> // importar biblioteca necessária para execução do programa em C

int main() { // abrir função de execução principal do projeto
    float temperaturaC, temperaturaF; // declarar variáveis das temperaturas do enunciado

    printf("Insira uma temperatura em Celcius:\n"); // pedir ao usuário a temperatura em celcius
    scanf("%f", &temperaturaC); // salvar temperatura em um armazenamento específico "&" na varíavel temperaturaC

    temperaturaF = 1.8*temperaturaC + 32; // elaborar expressão que converte a temperatura em celcius para farenheit

    printf("A temperatura de %.2f graus Celcius equivale à %.2f graus Farenheit.", temperaturaC, temperaturaF); // retorno com temperaturas referenciados como floats

    return 0; // verificar status de término do programa
}