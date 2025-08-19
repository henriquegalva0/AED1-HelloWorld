// 7. Traduza o seguinte código Python para C:
//    Python:
//        numero = int(input('Digite um número: '))
//        print('O triplo é', numero*3)

#include <stdio.h> // importar biblioteca necessária para execução do programa em C

int main() { // abrir função de execução principal do projeto

    float numero, triplo; // declarar variáveis antes do input como float caso o usuário não insira um número inteiro
    printf("Digite um número: "); // informar ao usuário conteúdo do input 'Digite um número: '
    scanf("%f",&numero); // salvar número como feito no input em python

    triplo = numero*3; // calcular triplo do número

    printf("O triplo é %.2f", triplo); // linha em python 'print('O triplo é', numero*3)', porém trazendo armazenamento específico "&"

    return 0; // verificar status de término do programa
}