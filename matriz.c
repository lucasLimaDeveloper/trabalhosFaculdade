// Situação problematizadora

// Desenvolver um programa que leia uma matriz de 3 x 3 elementos usando um comando for, multiplique cada elemento por cinco e imprima o resultado.

#include <stdio.h>

int main(void)
{
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("%i\n", matriz[linha][coluna] * 5);
        }
    }
}