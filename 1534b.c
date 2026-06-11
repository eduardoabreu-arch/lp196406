/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Nunes de Abreu Júnior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : DD/MM/2026
Objetivo    : Ler um valor N e construir uma matriz quadrada N×N,
              preenchendo a diagonal principal com 1, a diagonal secundária
              com 2 e os demais elementos com 3, sem utilizar o operador [].
Aprendizado : Utilização de ponteiros para acessar elementos de uma matriz,
              aritmética de ponteiros, manipulação de diagonais e leitura de
              múltiplos casos de teste até o fim do arquivo (EOF).
Pergunta de segunda ordem: Como a aritmética de ponteiros permite acessar
                            elementos de vetores e matrizes sem utilizar o
                            operador [] e quais são as vantagens e cuidados
                            dessa abordagem?
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(void)
{
    int z;

    while (scanf("%d", &z) != EOF)
    {
        int ara[z][z];
        int a, b;

        for (a = 0; a < z; a++)
        {
            for (b = 0; b < z; b++)
            {
                *(*(ara + a) + b) = 3;
            }
        }

        for (a = 0; a < z; a++)
        {
            *(*(ara + a) + a) = 1;
        }

        for (a = 0; a < z; a++)
        {
            *(*(ara + a) + (z - 1 - a)) = 2;
        }

        for (a = 0; a < z; a++)
        {
            for (b = 0; b < z; b++)
            {
                printf("%d", *(*(ara + a) + b));
            }
            printf("\n");
        }
    }

    return 0;
}
