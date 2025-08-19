// 3. Escreva um programa que calcule e imprima a área de um círculo, dado o raio (Use a constante PI = 3.14159)

// não vou importar a biblioteca de matemática (#include <math.h>) para utilizar o PI, pois no enunciado foi dado o valor da constante

#include <stdio.h> // importar biblioteca necessária para execução do programa em C

int main() { // abrir função de execução principal do projeto
    float PI = 3.14159; // declarar variável da constante pi dada

    int raio; // declarar variável do inteiro do raio
    printf("Insira o raio do círculo:\n"); // pedir ao usuário que insira o raio
    scanf("%d", &raio); // salvar número inteiro "&d" em um armazenamento específico "&"

    float area = raio * raio * PI; // declarar variável de área já calculando o valor dela com o raio ao quadrado

    printf("O valor da área do círculo de raio %d é %.2f", raio, area); // retorno com valores referenciados como inteiro e depois float

    return 0; // verificar status de término do programa
}