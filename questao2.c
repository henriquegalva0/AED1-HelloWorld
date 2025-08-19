// 2. Crie um programa que leia um número inteiro e imprima o dobro desse número

#include <stdio.h> // importar biblioteca necessária para execução do programa em C

int main() { // abrir função de execução principal do projeto
    int numero, dobro; // declarar variável do número e do dobro como inteiros
    printf("Insira um número inteiro:\n"); // pedir para o usuário inserir um número
    scanf("%d",&numero); // salvar número inteiro "&d" em um armazenamento específico "&"

    dobro = numero * 2; // calcular dobro do número inteiro

    printf("O seu número é %d e o dobro dele é %d.", numero, dobro); // imprimir para o usuário a leitura do número e do dobro desse número

    return 0; // verificar status de término do programa
}