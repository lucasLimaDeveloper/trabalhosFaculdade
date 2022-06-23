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