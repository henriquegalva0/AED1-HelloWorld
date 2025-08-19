// 6. Escreva um programa que leia um número inteiro e informe se ele é par ou ímpar

#include <stdio.h> // importar biblioteca necessária para execução do programa em C

int main() { // abrir função de execução principal do projeto
    int numero; // declarar variável do número inteiro
    printf("Insira um número inteiro:\n"); // pedir para o usuário inserir um número
    scanf("%d",&numero); // salvar número inteiro "&d" em um armazenamento específico "&"

    float resto = numero % 2; // calcular o resto da divisão do número por 2 (se 0, então é divisível, logo par) 

    if (resto!=0) { // caso o resto não for 0, execute:
        printf("O seu número é %d e ele é ímpar.", numero); // chamar varíavel do número e printar
    } else { // caso o resto for 0
        printf("O seu número é %d e ele é par.", numero); // chamar varíavel do número e printar
    }

    return 0; // verificar status de término do programa
}