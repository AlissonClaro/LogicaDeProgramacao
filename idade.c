#include <stdio.h>


int main() {
    int idade;
    idade = 20;
    int fator = 5;
    int soma = idade + fator;
    // soma += fator; soma = soma + fator

    /*Comando para executar o codigo
    gcc idade.c -o idade para renomear o executavel para idade e setar ele para executar.
    ./idade - executar o codigo. */

    printf("Idade: %d\n", idade);
    printf("Idade + Fator: %d\n", soma);
    printf("Idade - Fator: %d\n", idade - fator);
    printf("Idade / Fator: %d\n", idade / fator);
    printf("Resto de Divisão: %d\n", idade % fator);

    return 0;
}