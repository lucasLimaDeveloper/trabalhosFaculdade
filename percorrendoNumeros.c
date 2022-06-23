// Situação problematizadora

// Desenvolver um programa para que o usuário possa realizar a digitação de dois números (número inicial e número final). Dentro de uma estrutura de repetição será preciso verificar se o número que está sendo alimentado é um número par ou ímpar. A checagem do número deverá ser feita em uma função a ser criada. A função é quem deverá verificar a informação recebida e retornar o status se é par ou ímpar. Dentro da estrutura de repetição será preciso exibir uma mensagem com o valor do número e mais uma frase dizendo se ele é par ou ímpar. Após o término da estrutura de repetição será preciso informar a quantidade total de números pares encontrados.

#include <stdio.h>

int main(void)
{
    int inicio;
    int final;

    printf("Digite o primeiro número: ");
    scanf("%i", &inicio);
    printf("Digite o segundo número: ");
    scanf("%i", &final);

    int checagem(int inicio, int final);
    checagem(inicio, final);

    return 0;
}

int checagem(int inicio, int final)
{
    int contador;

    for (int i = inicio; i <= final; i++)
    {
        if (i % 2 == 0)
        {
            printf("O número %i é par\n", i);
            contador++;
        }
        else
        {
            printf("O número %i é ímpar\n", i);
        }
    }
    printf("Ao todo, %i números pares", contador);
}