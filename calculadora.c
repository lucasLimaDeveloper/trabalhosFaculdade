// Situação problematizadora

// Uma empresa necessita de um programa que simule uma calculadora para poder ajudar o setor financeiro a realizar as operações triviais (soma, subtração, multiplicação e divisão).

// É importante que a calculadora calcule de forma simultânea todas as quatro operações e exiba os seus respectivos valores.

#include <stdio.h>
main()
{
    float valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    
    printf("O resultado da soma é: %.1f\n", valor1 + valor2);
    printf("O resultado da subtração é: %.1f\n", valor1 - valor2);
    printf("O resultado da multiplicação é: %.1f\n", valor1 * valor2);
    printf("O resultado da divisão é: %.1f\n", valor1 / valor2);
}
