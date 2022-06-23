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
