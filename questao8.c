// 8. Crie um programa que leia N números e calcule a soma, média, maior e menor valor.

#include <stdio.h> // importar biblioteca necessária para execução do programa em C

int main() { // abrir função de execução principal do projeto

    float numeroatual,denominador,maior,menor,soma,media; // declarar todas as varíaveis como float para evitar problemas de números inteiros

    soma = 0; // declarar soma = 0 para evitar conflitos no código
    denominador = 0; // declarar denominador = 0 para evitar conflitos no código
    maior = -__FLT_MAX__; // declarar variável "maior" como menor valor existente para que eu possa comparar valores maiores
    menor = __FLT_MAX__; // declarar variável "menor" como maior valor existente para que eu possa comparar valores menores


    while (1) { // iniciar loop while infinito a não ser que seja quebrado
        printf("Insira um número: "); // pedir ao usuário para colocar número
        scanf("%f", &numeroatual); // tratar número colocado como float e armazená-lo em um lugar específico "&"

        if (numeroatual>maior) { // comparar número atual com o número dentro da variável maior para achar o maior valor
            maior = numeroatual; // caso a condição for atendida, igualar o numero atual ao maior valor
        }
        if (numeroatual<menor) { // comparar número atual com o número dentro da variável menor para achar o menor valor
            menor = numeroatual; // caso a condição for atendida, igualar o numero atual ao menor valor
        }

        soma = soma + numeroatual; // somar todos os valores considerados
        denominador++; // somar mais um valor ao denominador

        char continuar; // declarar variável de continuar ou não colocando números como "char" por ser "Y" ou "n"
        printf("Deseja continuar? (Y/n): \n"); // perguntar ao usuário se ele deseja colocar mais números
        scanf(" %c", &continuar); // salvar valor de resposta em uma variável "char" colocando um espaço (" %c") antes para ignorar qualquer espaço feito pelo print anterior

        if (continuar == 'Y') { // analisar resposta do usuário, se sim então continuar
            continue;
        }
        if (continuar == 'n') { // analisar resposta do usuário, se não então parar
            break;
        }
    }

    media = soma/denominador; // calcular média utilizando a soma dos números e o denominador

    printf("A soma dos números é %.2f. O maior número é %.2f, o menor número é %.2f e a média é %.2f",soma,maior,menor,media); // printar ao usuário a análise considerando todas as variáveis prévias

    return 0; // verificar status de término do programa
}